#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstring>

using namespace std;

bool isPalindrome(string s)
{
    int start = 0, end = s.length() - 1;
    while (start < end)
    {
        if (!isalnum(s[start]))
        {
            start++;
        }
        else if (!isalnum(s[end]))
        {
            end--;
        }
        else
        {
            if (tolower(s[start++]) != tolower(s[end--]))
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    int t ;
    cin >> t ;
    while(t--){
        string tc ;
        getline(cin >> tc , tc) ;
        string result = (isPalindrome(tc))? "YES" : "NO" ;
        cout << result << endl ;
        result = "" ;
    }

    return 0;
}