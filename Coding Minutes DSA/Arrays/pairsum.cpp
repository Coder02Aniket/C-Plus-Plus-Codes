/*Given an array of n integers and an number 5 denoting the target sum find two distinct integers that can pair up to form target sum let us asssume thtat there will be only one pair */
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> pairsum(vector<int> arr, int s)
{
    unordered_set<int> se;
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = s - arr[i];
        if (se.find(x) != se.end())
        {
            result.push_back(x);
            result.push_back(arr[i]);
            return result;
        }
        se.insert(arr[i]);
    }
}
int main()
{
    cout << "enter size of array \t ";
    int n = 0;
    cin >> n;
    vector<int> arr(n, 0);
    while (n--)
    {
        cin >> arr[n - 1];
    }
    vector<int> T = pairsum(arr, -10);
    for (int i : T)
    {
        cout << i << " ";
    }

    return 0;
}