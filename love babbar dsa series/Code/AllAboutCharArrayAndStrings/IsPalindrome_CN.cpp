#include <iostream>

using namespace std;

bool isPalindrome(string s)
{
    int start = 0, end = s.length() - 1;
    while (start < end)
    {
        if (isalnum(s[start]) && isalnum(s[end]))
        {
            if (isupper(s[start]||s[end]))
            {
                tolower(s[start]);
                tolower(s[end]) ;
                if(!(s[start] == s[end]))
                {
                    return false;
                }
            }

            else if (!(s[start] == s[end]))
            {
                return false;
            }
            start++, end--;
        }
        else
        {
            if (isalnum(s[start]))
            {
                end--;
            }
            else
            {
                start++;
            }
        }
    }

    return true;
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