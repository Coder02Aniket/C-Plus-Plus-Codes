#include<iostream>
#include<vector>

using namespace std;

void moveZeros(vector<int>& nums){
    int size = nums.size() ;
    int index = 0 ;
    for(int i = 0 ;i < size ; i++){
        if(nums[i] == 0 ){
            continue;
        }
        else{
            swap(nums[i],nums[index++]) ;  
        }
    }
}
int main(){
    vector<int>nums = { 1,0,0,3,12,0} ;
    moveZeros(nums) ;
    for(int i : nums){
        cout << i << " " ;
    }
    
    return 0;
}