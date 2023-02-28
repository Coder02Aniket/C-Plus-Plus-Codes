//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int n = nums.size() ;
	    pair<int,int>ap[n] ;
	    for(int i = 0 ; i < n ; i++){
	        ap[i].first = nums[i] ;
	        ap[i].second = i ;
	    }
	    sort(ap,ap+n) ;
	    vector<bool> visited(n,false) ;
	    int ans = 0 ;
	    for(int i = 0 ; i < n ; i++){
	       // if element is visited is in right position 
	       int old_position = ap[i].second ;
	       if(visited[i] == true or old_position == i ){
	           continue ;
	       }
	       
	       //visiting the element (index ) for first time 
	       int  node = i ;
	       int cycle = 0 ;
	       while(!visited[node]){
	           visited[node] = true ; 
	           int next_node = ap[node].second ;
	           node = next_node ;
	           cycle += 1 ;
	           
	       }
	       ans += cycle - 1 ;
	    }
	    return ans ; 
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends