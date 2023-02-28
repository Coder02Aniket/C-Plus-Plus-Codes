#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<algorithm>



using namespace std;

int ThreeEqualSticks(vector<int>nums){
    sort(nums.begin() , nums.end()) ;
    int size = nums.size() , diff = 0, sum = 0 , min_diff = INT32_MAX;
    
    // vector<int>min_diff; 
    for(int i = 1 ; i+1 < size ; i++){
        diff  = nums[i+1] -(nums[i-1]) ;
        // cout << diff << " " ;
        if(diff < min_diff){
            min_diff = diff ;
        }
        
    }
    // cout << endl ;
    // sort(min_diff.begin(),min_diff.end()) ;

    
    return min_diff ;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> arr ;
    int t , n ,ele; 
    cin >> t ;
    while(t--){
        cin >> n ;
        for(int i = 0 ; i < n  ; i++){
            cin >> ele ;
            arr.push_back(ele) ;
        }
        cout << ThreeEqualSticks(arr) << endl ;
        arr.clear() ;
    }
    
    return 0;
}