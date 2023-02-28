#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



  class Solution
{
    public:
    string calc_Sum(int *a,int n,int *b,int m)
    {

        int i=n-1,j=m-1,carry=0;

        string ans="";

        while(i>=0 || j>=0)
        {

            int sum=(i>=0?a[i--]:0)+(j>=0?b[j--]:0)+carry;

            carry=sum/10;

            ans+=to_string(sum%10);

        }
        if(carry)
        {
            ans+=to_string(carry);
        }

        reverse(ans.begin(),ans.end());

        while(!ans.empty() && ans[0]=='0')
        {
            ans.erase(ans.begin());
        }

        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int m;
	    cin>>m;
	    int b[m];
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	    }
	    Solution ob;
	    cout << ob.calc_Sum(a,n,b,m) << endl;
	}
	return 0;
}