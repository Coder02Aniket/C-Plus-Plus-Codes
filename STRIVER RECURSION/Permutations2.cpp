#include<bits/stdc++.h>


using namespace std;



// **************THANKS TO STRIVER****************************
// TC = O(n!*n)
// SC = O(N) + O(N!)
class Solution
{
public:
    vector<vector<int>> permute(vector<int> nums)
    {
        vector<int> ds;
        vector<vector<int>> ans;

        recursor(nums, ans);
        //inserting the ans into set to remove duplicate permutations
        set<vector<int>>setter = set<vector<int>>(ans.begin(),ans.end());
        //again assigning the set to ans 
        ans.assign(setter.begin() , setter.end());
        return ans;
    }

private:
    void recursor(vector<int> &nums, vector<vector<int>> &ans,int index = 0)
    {
        if(index == nums.size()){
            ans.push_back(nums);
            return ;
        }
        //Traversing Every Index
        for(int i = index ; i < nums.size() ; i++){
            //swapping the index and i
            swap(nums[index],nums[i]);
            //call to next index
            recursor(nums,ans,index+1);
            //restoring the swap (backtracking)
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