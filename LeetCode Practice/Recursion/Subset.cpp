#include<bits/stdc++.h>


using namespace std;
// TC - 2^n* k
// Space C - 2^n
class Solution {
    private:
    static bool cmp(vector<int>&v1 , vector<int>&v2){
        if(v1.size() < v2.size()){
            return true ;
        }
        if(v1.size()==v2.size()){
            if(v1.front() < v2.front()){
                return true ;
            }
        }
        return false ;
    }
public:

    vector<vector<int>> subsets(vector<int> nums) {
        
        vector<int>ds ;
        vector<vector<int>>ans;
        recursor(nums,ds,ans);
        // set<vector<int>>setter(ans.begin(),ans.end());
        // ans.assign(setter.begin(),setter.end());
        sort(ans.begin(),ans.end(),cmp);

        return ans;
    }
    
    void recursor(vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans , int ind = 0 ){
        if(ind == nums.size()){
            ans.push_back(ds);
            return ;
        }

        ds.push_back(nums[ind]);
        recursor(nums,ds,ans,ind+1);
        ds.pop_back();

        recursor(nums,ds,ans,ind+1);
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
    
    Solution *ob ;

    for(vector<int> vec : ob->subsets({1,2,3})){
        for(int i : vec){
            cout << i << " ";
        }
        cout << endl ;
    }



    return 0;
}