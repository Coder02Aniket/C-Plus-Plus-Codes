#include<bits/stdc++.h>


using namespace std;

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int> nums) {
        vector<int>ds;
        vector<vector<int>>ans ;
        recursor(nums,ds,ans);

        return ans ;
    }
    void recursor(vector<int>&nums , vector<int>&ds,vector<vector<int>>&ans, int ind = 0){


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
    
    Solution* bo ;
    for(vector<int> i : bo->permuteUnique({1,1,2}))
    {
        for(int j : i ){
            cout << j  << " ";

        }
        cout << endl; 
    }



    return 0;
}