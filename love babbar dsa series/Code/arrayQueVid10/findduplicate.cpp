#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    
    int findDuplicate(vector<int>& nums) {
        int result = 0 ;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i <nums.size() ; i++) {
            if(nums[i]==nums[i+1]){
                result= nums[i] ;
                break ;
            }
         }
       return result ; 
    }

};
int main(){
    vector<int>myfirst = {1 , 2 , 45 ,58 , 1 , 56 } ;
    Solution leet ;
    auto a = leet.findDuplicate(myfirst) ;
    cout<<a ;
}