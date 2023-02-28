/*
write a function that  takes input array of distinct integers and returns the length of highest mountain
.at least 3 numbers are required to form a mountain
*/
#include <iostream>
#include <vector>

using namespace std;

int LengthOfTallestMountain(vector<int> &A)
{

    if (A.size() == 0)
        return 0;

    int maxLen = 0;
    for (int i = 1; i < A.size() - 1; i++)
    {
        if (A[i] > A[i + 1] && A[i] > A[i - 1])
        {
            int left = i - 1;
            int right = i + 1;

            while (left > 0 && A[left - 1] < A[left])
                left--;
            while (right < A.size() - 1 && A[right + 1] < A[right])
                right++;
            maxLen = max(maxLen, right - left + 1);
        }
    }
    return maxLen;
}

int main()
{

    vector<int> TC = {2, 1, 4, 7, 3, 2, 5};
    cout << LengthOfTallestMountain(TC);
    return 0;
}