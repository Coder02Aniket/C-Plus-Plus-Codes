#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {   
        bool flag = false ;
        stack<char> par;
        if(s.length()==1){
            return false ;
        }
        for (int i = 0; i < s.length(); i++)
        {
            
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                
                par.push(s[i]);
            }
            else if(!par.empty()){ 
                if (s[i] == '}' && par.top() == '{' )
                {
                    par.pop();
                }
                else if (s[i] == ']' && par.top() == '[')
                {
                    par.pop();
                }
                else if (s[i] == ')' && par.top() == '(')
                {
                    par.pop();
                }
                else{
                    return false ;
                }
            }
            else{
                return false ;
            }
        }
        if(!par.empty()){
            return false ;
        }
        return true;
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    Solution* ob ;
    cout << ob->isValid("()") << endl ;

    

    return 0;
}