#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool findSubarrays(vector<int>& nums) {
    // sort(nums.begin(),nums.end()) ;
    int i = 0 , j = 1 , k = nums.size() - 2 , l = nums.size() - 1 ;
    while(j <=k){
        int leftside = nums[i]+nums[j] ;
        int rightside = nums[k] + nums[l] ;
        if(leftside== rightside){
            return true ;
        }
        else{
            int m = k , n = l ;
            while(m>j){
                if(leftside == nums[m]+nums[n]){
                    return true ;
                }
                else{
                    m--,n--;
                }
            }
        }
        i++,j++,k--,l--;
    }
    return false ;
}
int main(){
    
    
    return 0;
}