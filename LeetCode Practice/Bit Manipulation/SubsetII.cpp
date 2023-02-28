#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    // bit manipulation
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        int size = nums.size(), combinations = 1 << size;
        set<vector<int>> set_vector;
        for (int i = 0; i < combinations; i++)
        {
            vector<int> ans;
            for (int j = 0; j < size; j++)
            {
                if ((i & (1 << j)) != 0)
                {
                    ans.push_back(nums[j]);
                }
            }
            sort(ans.begin(), ans.end());
            set_vector.insert(ans);
        }
        // for(vector<int> i : ans ){
        //     set_vector.insert(i);
        // }

        // ans.assign(set_vector.begin(),set_vector.end());
        return vector<vector<int>>(set_vector.begin(), set_vector.end());
    }
};
// recursive approach
class Solution
{
public:
    void help(int i, vector<vector<int>> &ans, vector<int> v, vector<int> &nums)
    {

        if (i == nums.size())
        {

            // check for duplicate elements
            for (int i = 0; i < ans.size(); i++)
            {
                if (v == ans[i])
                {
                    return;
                }
            }
            ans.push_back(v);
            return;
        }
        //pick condition 
        v.push_back(nums[i]);
        help(i + 1, ans, v, nums);

        // backtraking
        // not pick
        v.pop_back();
        help(i + 1, ans, v, nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> v;
        sort(nums.begin(), nums.end());
        help(0, ans, v, nums);
        return ans;
    }
};