#include<bits/stdc++.h>


using namespace std;

class Solution {
public:
    void help(int i,vector<vector<int>>&ans,vector<int>v,vector<int>& nums){
        
        if(i==nums.size()){
		
		//check for duplicate elements 
            for(int i=0;i<ans.size();i++){
                if(v==ans[i]){
                    return;
                }
            }
            ans.push_back(v);
            return;
        }
        
        v.push_back(nums[i]);
        help(i+1,ans,v,nums);
        
		//backtraking
        v.pop_back();
        help(i+1,ans,v,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        sort(nums.begin(),nums.end());
        help(0,ans,v,nums);
        return ans;
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //#ifndef ONLINE_JUDGE

        //freopen("input.txt","r", stdin);

        //freopen("output.txt","w", stdout);

        //freopen("errors.txt","w",stderr);

    //#endif
    




    return 0;
}