#include<bits/stdc++.h>


using namespace std;

class Solution {
public:
    int searchInsert(vector<int> nums, int target) {
        // vector<int>::iterator it =  lower_bound(nums.begin(),nums.end(),target);
        // return it - nums.begin() ;

        int l = 0 , r = nums.size()-1 , mid = 0;
        while(l <= r ){
            mid = l + (r - l)/2 ;
            if(nums[mid]==target){
                return mid ;
            }else if(nums[mid]>target){
                r = mid -1 ;
            }else{
                l = mid + 1 ;
            }
        }
        return l ;
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
    // nums = [1,3,5,6], target = 5
    Solution* ob ;
    cout << ob->searchInsert({1,3,5,6},7);




    return 0;
}