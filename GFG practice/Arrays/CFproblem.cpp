#include <iostream>
#include<vector> 

using namespace std;
bool OutofOrder(vector<int>&nums , int i){
    int x = nums[i] ;
    if(i == 0 ){
        return x > nums[1] ;
    }
    if(i == nums.size() - 1){
        return x < nums[i-1] ;
    }
    return x > nums[i+1]  or x < nums[i-1] ;
}
vector<int>SubArraySort(vector<int>& nums ){
    int largest = INT32_MIN ;
    int smallest = INT32_MAX ;
    for(int i = 0 ; i < nums.size() ; i++){
        int x = nums[i] ;
        if(OutofOrder(nums,i)){
            smallest = min(x,smallest) ;
            largest = max(x,largest) ;
        }
        
    }
    int left = 0 ;
    while(smallest >= nums[left] ){
        left++ ;
    }
    int right = nums.size() -1 ;
    while(largest <= nums[right]){
        right--;
    }
    return {left , right}  ;
}
int main() {
	// your code goes here
	int t ; 
	cin>> t ;
	while(t--){
	    int n = 0 ;
	    cin >> n ;
	    vector<int> tc ;
	    while(n--){
	        int p = 0 ;
	        cin >> p ;
	        tc.push_back(p);
	    }
	    auto result = SubArraySort(tc);
	    cout << result[0] <<","<< result[1];
	    cout << endl;

	    tc.clear();
	}
	return 0;
}