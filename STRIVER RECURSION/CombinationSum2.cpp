/*
 * Given a collection of candidate numbers (arr) and a target number (target), find all unique combinations in arr where the candidate numbers sum to target.

    *   Each number in arr may only be used once in the combination.

    *   Note: The solution set must not contain duplicate combinations.
*/
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> combinationSum2(vector<int> arr, int target)
    {
        sort(arr.begin(), arr.end());
        vector<int> ds;
        vector<vector<int>> ans;
        recursor(target, arr, ds, ans);

        return ans;
    }
    void recursor(int target, vector<int> &arr, vector<int> &comb, vector<vector<int>> &ds, int ind = 0)
    {
        if (target == 0)
        {
            ds.push_back(comb);
            return;
        }
        for (int i = ind; i < arr.size(); i++)
        {
            if (i > ind && arr[i] == arr[i - 1])
            {
                continue;
            }
            if (arr[i] > target)
            {
                break;
            }
            comb.push_back(arr[i]);
            recursor(target - arr[i], arr, comb, ds, i + 1);
            comb.pop_back();
        }
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE

    //     freopen("input.txt","r", stdin);

    //     freopen("output.txt","w", stdout);

    //     freopen("errors.txt","w",stderr);

    // #endif
    Solution *ob;
    // arr = [10,1,2,7,6,1,5], target = 8
    for (vector<int> &i : ob->combinationSum2({10, 1, 2, 7, 6, 1, 5}, 8))
    {
        for (int j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}