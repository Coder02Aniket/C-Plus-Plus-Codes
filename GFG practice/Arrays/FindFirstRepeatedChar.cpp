// Given a string S. The task is to find the first repeated character in it. We need to find the character that occurs more than once and whose index of second occurrence is smallest. S contains only lowercase letters.
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
   int ch[26]={0};
   string m="";
   
   for(int i=0 ; i<s.length(); i++)
   {
       if(ch[s[i] - 'a']==1)
       {
           m=s[i];
           return m;
       }
       else
       {
           ch[s[i] - 'a']++;
       }  
   }
   m = "-1" ;
   return m; 
       
}