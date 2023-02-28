#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        stack<string> worder;
        int last_pos = 0;
        remove_spaces(s);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]==' '||i == s.size()-1)
            {
                if (i == s.size() - 1)
                {
                    worder.push(s.substr(last_pos));
                }
                else
                {
                    worder.push(s.substr(last_pos, i - last_pos));
                }
                last_pos = i + 1;
            }
        }

        s.clear();
        while(!worder.empty()){
            s.append(worder.top());
            worder.pop();
            s.append(" ");
        }

        return s;
    }
    void remove_spaces(string& s){
        while(s[0]==' '){
            s.erase(0,1);
        }
        while(s[s.size()-1]==' '){
            s.pop_back();
        }
        for(int i = 1 ; i < s.size() ; i++){
            if(s[i]==' ' && s[i-1]==' '){
                s.erase(i,1);
                i = i - 1 ;
            }
        }
    }
};
// Alternate and concise solution
class Solution {
public:
    string reverseWords(string s) {
        istringstream ss(s);
        string w,res="";
        while(ss>>w) res=w+" "+res;
        res.pop_back();
        return res;
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE

    // freopen("input.txt","r", stdin);

    // freopen("output.txt","w", stdout);

    // freopen("errors.txt","w",stderr);

    // #endif
    Solution* ob ;
    cout << ob->reverseWords(" the sky   is blue ");
    // Lambda expression
    auto returner = [](int a= 10 , int b = 20 ){
        return a+b ;
    };
    cout << returner() << endl ;
    return 0;
}