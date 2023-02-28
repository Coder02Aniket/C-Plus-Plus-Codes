#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE

    freopen("input.txt","r", stdin);

    freopen("output.txt","w", stdout);

    freopen("errors.txt","w",stderr);

    #endif
    int tc, n, k, l, r, num = 0;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> k;
        vector<int> table(51, 0);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> l >> r;
            if (l <= k && k <= r)
            {
                for (int j = l;j <= r; j++)
                {
                    table[j]++;
                }
            }
        }
        num = table[k];
        for (int i = 0; i < 51; i++)
        {
            if (table[i] >= num && i != k )
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}
// TC - O(n) ; Auxillary Space - O(1) ;