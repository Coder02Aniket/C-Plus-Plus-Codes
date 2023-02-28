#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE

    // freopen("input.txt","r", stdin);

    // freopen("output.txt","w", stdout);

    // freopen("errors.txt","w",stdout);

    // #endif
    int tc;
    char c;
    cin >> tc;
    string test = "codeforces";
    while (tc--)
    {
        cin >> c;
        if (test.find(c) != string::npos)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
