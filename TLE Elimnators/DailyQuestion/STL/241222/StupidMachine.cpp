#include <bits/stdc++.h>

using namespace std;
#define ll long long 

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n ;
        int ans = 0;
        vector<int> capacity(n, 0), lowest_before(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> capacity[i];
            if (i == 0)
            {
                lowest_before[i] = capacity[i];
            }
            else
            {
                if (lowest_before[i - 1] > capacity[i])
                {
                    lowest_before[i] = capacity[i];
                }
                else
                {
                    lowest_before[i] = lowest_before[i - 1];
                }
            }
        }
        for (int i : lowest_before)
        {
            ans += i;
        }
        cout << ans << endl;
    }

    return 0;
}