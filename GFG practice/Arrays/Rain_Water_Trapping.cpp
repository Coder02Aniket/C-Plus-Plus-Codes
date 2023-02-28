//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int ele_map[], int n){
        // code here
        long long result = 0;
        if(n <= 2 ) {
            return 0 ;
        }
        vector<int> left(n,0) , right(n , 0 ) ;
        left[0] = ele_map[0] ;
        right[n-1] = ele_map[n-1] ;
        for(int i = 1 ; i < n;i++){
            left[i] = max(left[i-1] , ele_map[i]) ;
            right[n-i-1] = max(right[n-i],ele_map[n-i-1]) ;
    
        }
        for(int i = 0 ; i < n ; i++){
            result += min(left[i] , right[i]) - ele_map[i] ;
        }
        return result ;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends