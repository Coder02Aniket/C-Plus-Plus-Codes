#include <bits/stdc++.h>

using namespace std;
// TC = O(N!*N)
// SC = O(N) + O(N)
class Solution
{
public:
    vector<vector<int>> permute(vector<int> nums)
    {
        vector<int> ds;
        vector<vector<int>> ans;
        unordered_map<int, bool> map;
        recursor(nums, ds, ans, map);
        return ans;
    }

private:
    void recursor(vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans, unordered_map<int, bool> &map)
    {

        if (ds.size() == nums.size())
        {
            ans.push_back(ds);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (!map[nums[i]])
            {
                ds.push_back(nums[i]);
                map[nums[i]] = true;
                recursor(nums, ds, ans, map);
                map[nums[i]] = false;
                ds.pop_back();
            }
        }
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE

    // freopen("input.txt","r", stdin);

    // freopen("output.txt","w", stdout);

    // freopen("errors.txt","w",stderr);

    // #endif
    
    Solution *ob ;
    for(vector<int>i : ob->permute({1,2,3})){
        for(int j : i){
            cout << j << " ";
        }
        cout << endl ;
    }

    return 0;
}