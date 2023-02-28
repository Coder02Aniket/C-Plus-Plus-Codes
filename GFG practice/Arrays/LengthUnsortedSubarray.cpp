//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    bool outofOrder(int arr[] , int i , int n ){
        int x = arr[i] ;
        
        if(i== 0 ){
            if( n == 1){
                return 0 ;
            }
            return x > arr[1];
        }
        if(i == n -1 ){
            return x < arr[i-1];
        }
        return x > arr[i+1] or x < arr[i-1] ;
    }
    vector<int> printUnsorted(int nums[] , int n){
        int smallest = INT32_MAX;
        int largest = INT32_MIN;
        for (int i = 0 ; i < n ; i++){
            int x = nums[i] ;
            if(outofOrder(nums , i , n)){
                smallest = min (smallest , x) ;
                largest = max(largest , x ) ;
            }
        }
        if(smallest == INT32_MAX){
            return {0,0} ;
        }
    
        int left = 0 ;
        while(smallest >= nums[left]){
            left++ ; 
        }
        int right = n - 1  ;
        while( largest <= nums[right]){ 
            right--;
        }
        return {left , right} ;
    }   
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printUnsorted(arr, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends