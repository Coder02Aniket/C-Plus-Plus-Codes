#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long int Max_Diff(vector<long long int>& result, int size, int no_of_pours)
{

    sort(result.begin(), result.end());
    long long int result1 = result[size - 1];
    while (no_of_pours > 0)
    {
        size--;
        result1 = result1 + result[size - 1];
        no_of_pours--;
    }
    return result1;
}
int main()
{
    vector<long long int> result;
    int t, size, no_of_pours;
    cin >> t;
    while (t--)
    {
        cin >> size;
        cin >> no_of_pours;
        long long int a = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> a;
            result.push_back(a);
        }
        cout << Max_Diff(result, size, no_of_pours) << endl;
        result.clear();
    }
}