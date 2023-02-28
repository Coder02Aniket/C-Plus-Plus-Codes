#include <bits/stdc++.h>

#define intt long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    intt a, b, c, sum;
    cin >> a;
    cin >> b;
    cin >> c;
    sum = a + b + c ;
    if ((sum - a) % 2 == 0 && (sum-a) || (sum - b) % 2 == 0 && (sum-b)|| (sum - c) % 2 == 0 && (sum-c))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}