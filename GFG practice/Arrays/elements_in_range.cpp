//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
        unordered_set<int> for_range , for_arr;

        int i = 0;
        while(i < n){
            for_arr.insert(arr[i]) ;
            i++;
        }
        int prev = for_arr.size() ;
        int start = A, end = B;
        while (start <= end)
        {
            for_arr.insert(start);
            start++;
        }
        if (prev == for_arr.size()){
            return true ;
        }
        else{
            return false ;
        }
	}
};
	

//{ Driver Code Starts.


int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,A,B;
		cin>>n>>A>>B;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];

        

        Solution ob;
        if (ob.check_elements(a, n, A, B))
			cout << "Yes";
		else
			cout << "No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}







// } Driver Code Ends