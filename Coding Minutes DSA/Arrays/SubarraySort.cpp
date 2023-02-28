#include<iostream>
#include<vector>




using namespace std;
bool outofOrder(vector<int> arr , int i){
    int x = arr[i] ;
    if(i== 0 ){
        return x > arr[1];
    }
    if(i == arr.size() -1 ){
        return x < arr[i-1];
    }
    return x > arr[i+1] or x < arr[i-1] ;
}
pair<int,int> Subarray(vector<int>nums){
    int smallest = INT32_MAX;
    int largest = INT32_MIN;
    for (int i = 0 ; i < nums.size() ; i++){
        int x = nums[i] ;
        if(outofOrder(nums , i )){
            smallest = min (smallest , x) ;
            largest = max(largest , x ) ;
        }
    }
    if(smallest == INT32_MAX){
        return make_pair(-1,-1) ;
    }

    int left = 0 ;
    while(smallest >= nums[left]){
        left++ ; 
    }
    int right = nums.size() - 1  ;
    while( largest <= nums[right]){ 
        right--;
    }
    return {left , right } ;

}
int main(){
    
    vector<int > tc = {10,12,16,14,11,18} ;
    auto tr = Subarray(tc) ;
    cout << tr.first <<" " <<tr.second ;
    return 0;
}