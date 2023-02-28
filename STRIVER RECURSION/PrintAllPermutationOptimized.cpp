#include<bits/stdc++.h>


using namespace std;
// TC = O(n!*n)
// SC = O(N*N!)
class Solution
{
public:
    vector<vector<int>> permute(vector<int> nums)
    {
        vector<int> ds;
        vector<vector<int>> ans;

        recursor(nums, ans);

        return ans;
    }

private:
    void recursor(vector<int> &nums, vector<vector<int>> &ans,int index = 0)
    {
        if(index == nums.size()){
            ans.push_back(nums);
            return ;
        }

        for(int i = index ; i < nums.size() ; i++){
            swap(nums[index],nums[i]);
            recursor(nums,ans,index+1);
            swap(nums[index],nums[i]);
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
    for(vector<int>i : ob->permute({1,1,2})){
        for(int j : i){
            cout << j << " ";
        }
        cout << endl ;
    }

    return 0;
}