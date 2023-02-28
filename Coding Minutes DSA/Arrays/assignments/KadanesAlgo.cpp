//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int i = 0 ;
        while(arr[i] < 0 &&  i < n ){
            i++ ;
        }
        if(i == n){
            return -1;
        }
        int MaxSumTillIndex = 0 ;
        long long  MaxSumSoFar = 0 ;
        for(int i = 0 ; i < n ; i++){
            MaxSumTillIndex = max(MaxSumTillIndex+arr[i],arr[i]);
            if(MaxSumTillIndex > MaxSumSoFar){
                MaxSumSoFar = MaxSumTillIndex ;
            }
        }

        return MaxSumSoFar ;
        
    }
};

//{ Driver Code Starts.

int main()
{

        int n = 4 ;
        int ar[n] = {-1,-2,-3,-4} ;   
        Solution ob;
        
        cout << ob.maxSubarraySum(ar, 4) << endl;
}


// } Driver Code Ends