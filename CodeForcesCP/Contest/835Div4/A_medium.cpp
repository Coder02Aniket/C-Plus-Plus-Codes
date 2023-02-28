#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, ab[3] = {0};
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> ab[i];
        }
        for (int abc : ab)
        {
            if (abc != *max_element(ab, ab + 3) && abc != *min_element(ab, ab+ 3))
            {
                cout << abc << endl;
            }
        }
    }

    return 0;
}