#include<iostream>
#include<bits/stdc++.h>


using namespace std;


class repeatedchar
{
  public:
    char firstRep (string s)
    {
        //code here.

        vector<int> c(26,0);
        char ans='#';
        for(int i=s.length()-1;i>=0;i--){
            if(c[s[i]-'a']) ans=s[i];
            c[s[i]-'a']++;
        }
        return ans;
    }
};