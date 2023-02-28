#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

bool distinct_numbers(vector<int>& nums){
    unordered_set<int> k ;
    int n = nums.size() ;
    for(int i = 0 ; i < n ; i++ ){
        k.insert(nums[i]) ;
    }
    int set_size= k.size() ;

    if(set_size % 2 == 0){
        return true;
    }
    else{
        if(set_size == n){
            return false ;
        }
        else if((n - set_size)!= 0){
            return true ;
        }
}
}
int main(){
    vector<int>nums = {1,2,1} ;
    cout << distinct_numbers(nums) ;
    
    return 0;
}