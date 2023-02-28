#include <bits/stdc++.h>
using namespace std;
#define int long long

void sub(int sum, int grp1, vector<int> &subset, int i, vector<int> &v)
{
    if (i == v.size())
    {
        if (grp1 != sum)
        {
            int grp2 = sum - grp1;
            subset.push_back(abs(grp1 - grp2));
        }
        return;
    }
    grp1 = grp1 + v[i];
    // ith element not in subset
    sub(sum, grp1, subset, i + 1, v);
    // ith element in subset
    grp1 = grp1 - v[i];

    sub(sum, grp1, subset, i + 1, v);
}

main()
{
    int n;
    cin >> n;
    int i = 1;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> empty;
    int sum = accumulate(v.begin(), v.end(), 0);
    sub(sum, 0, empty, 0, v);

    int a = *min_element(empty.begin(), empty.end());
    cout << a << endl;

    return 0;
}