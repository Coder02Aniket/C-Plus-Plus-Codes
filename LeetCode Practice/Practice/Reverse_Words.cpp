#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        string str, temp;

        int last_position = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ' || i == s.size() - 1)
            {
                if (i == s.size() - 1)
                {
                    reverse(s.begin() + last_position, s.end());
                }else{
                    reverse(s.begin() + last_position, s.begin() + (i));
                }
                last_position = i + 1;
            }
        }

        return s;
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    Solution *ob;
    cout << ob->reverseWords("Let's take LeetCode contest");

    return 0;
}