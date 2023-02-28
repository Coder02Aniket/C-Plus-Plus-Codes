//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string str)
{     
  //Your code here 

    string result = "";
    char chars = str[0] ;
    str.push_back('-1') ;
    int count = 1;
    for(int i = 1 ; i < str.length();i++){

        if(str[i-1] == str[i]){
            count++;
        }
        else{
            result = result + chars + to_string(count) ;
            count = 1 ;
            chars = str[i] ;
        
        }
    }

    return (result);


}     
 
