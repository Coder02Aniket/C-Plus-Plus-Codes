#include<bits/stdc++.h>


using namespace std;
// N = 6
// arr[] = {3, 34, 4, 12, 5, 2}
// sum = 9
class Solution {
public:
    // bit manipulation 
    vector<vector<int>> subsets(vector<int>& nums) {
        int size = nums.size() , combinations = 1 << size ;
        vector<vector<int>> ans(combinations);
        for(int i = 0 ; i < combinations ; i++){
            for(int j = 0 ;  j < size ; j++){
                if((i & (1 << j)) != 0){
                    ans[i].push_back(nums[j]);
                }
            }
        }
        return ans ;
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
    
    Solution* ob ;
    cout << ob->isSubsetSum({3, 34, 4, 12, 5, 2},9) << endl ;



    return 0;
}