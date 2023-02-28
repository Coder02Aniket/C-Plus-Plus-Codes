#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> par, curly, square;
        for (int i = 0; i < s.length(); i++)
        {
            
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                par.push(s[i]);
            }
            else if (s[i] == '}' && par.top() == '{')
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