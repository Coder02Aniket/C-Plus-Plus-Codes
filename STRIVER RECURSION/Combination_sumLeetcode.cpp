#include<bits/stdc++.h>


using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target ) {
        vector<int>current_combination ;
        vector<vector<int>>ans ;
        solver(0,target,candidates,current_combination,ans);
        return ans ;

    }
    void solver(int ind , int target ,vector<int>candidates,vector<int>current_combination,vector<vector<int>>&ds){
        if(ind == candidates.size() || target == 0){
            if(target == 0){
                ds.push_back(current_combination);
            }
            return ;
        }   
        if(candidates[ind]<=target){
            current_combination.push_back(candidates[ind]);
            solver(ind,target-candidates[ind],candidates,current_combination,ds);
            current_combination.pop_back();
        }
        solver(ind+1,target,candidates,current_combination,ds);
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
    Solution* obj ;
    vector<int>c = {2,3,6,7};
    for(vector<int>i : obj->combinationSum(c,7)){
        for(int j : i){
            cout << j << " ";
        }
        cout << endl ;
    }




    return 0;
}