// Write a function to perform basic string compression using the counts of repeated characters, also known as Run Length Encoding. Let see one example, the input string "aaaabcccccaaa" would become "a4b1c5a3". If the "compressed" string would not become smaller than the original string, your function should return the input string. You can assume the string has only uppercase and lowercase letters. You may use the to_string(int) method to convert an integer into string.
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
    str.push_back('1') ;
    int count = 1;
    for(int i = 1 ; str[i] != '1';i++){

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
