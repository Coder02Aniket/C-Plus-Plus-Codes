#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    // bit manipulation
    vector<vector<int>> subsets(vector<int> &nums)
    {
        int size = nums.size(), combinations = 1 << size;
        vector<vector<int>> ans(combinations);
        for (int i = 0; i < combinations; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if ((i & (1 << j)) != 0)
                {
                    ans[i].push_back(nums[j]);
                }
            }
        }
        return ans;
    }
};
// recursive approach
class Solution
{
private:
public:
    void solve(vector<int> &nums, vector<int> &output, int index, vector<vector<int>> &ans)
    {
        if (index == nums.size())
        {
            ans.push_back(output);
            return;
        }

        output.push_back(nums[index]); /////////  pick
        solve(nums, output, index + 1, ans);
        output.pop_back(); ///// not pick
        solve(nums, output, index + 1, ans);
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> output;
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }
};