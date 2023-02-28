#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// Unsolved
void nextPermutation(vector<int> &nums)
{
    int n = nums.size(), k, l;
    for (k = n - 2; k >= 0; k--)
    {
        if (nums[k] < nums[k + 1])
        {
            break;
        }
    }
    if (k < 0)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        for (l = n - 1; l > k; l--)
        {
            if (nums[l] > nums[k])
            {
                break;
            }
        }
        swap(nums[k], nums[l]);
        reverse(nums.begin() + k + 1, nums.end());
    }
}

int main()
{
    vector<int> Tc = {1, 5, 8, 4, 7, 6, 5, 3, 1};
    nextPermutation(Tc);
    for (int i : Tc)
    {
        cout << i << " ";
    }

    return 0;
}