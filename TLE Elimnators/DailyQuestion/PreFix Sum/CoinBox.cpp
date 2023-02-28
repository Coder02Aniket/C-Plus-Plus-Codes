/*Roy has N coin boxes numbered from 1 to N.
Every day he selects two indices [L,R] and adds 1 coin to each coin box starting from L to R (both inclusive).
He does this for M number of days.



After M days, Roy has a query: How many coin boxes have atleast X coins.

He has Q such queries.

Input
First line contains N - number of coin boxes.

Second line contains M - number of days.

Each of the next M lines consists of two space separated integers L and R.

Followed by integer Q - number of queries.

Each of next Q lines contain a single integer X.

Output
For each query output the result in a new line.

Constraints
1 ≤ N ≤ 1000000

1 ≤ M ≤ 1000000

1 ≤ L ≤ R ≤ N

1 ≤ Q ≤ 1000000
1 ≤ X ≤ N

Input:
7
4
1 3
2 5
1 2
5 6
4
1
7
4
2
Output:
6
0
0
4*/
#include <bits/stdc++.h>

using namespace std;
#define int long long

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE

    // freopen("input.txt", "r", stdin);

    // freopen("output.txt", "w", stdout);

    // freopen("errors.txt","w",stderr);

    // #endif

    int no_coin_box, no_days, l, r, q, x;
    cin >> no_coin_box;
    vector<int> coinbox(no_coin_box + 1, 0),freq(no_coin_box+1,0);
    cin >> no_days;
    for (int i = 0; i < no_days; i++)
    {
        cin >> l >> r;
        coinbox[l] += 1;
        if (r != no_coin_box)
            coinbox[r + 1] -= 1;
    }
    //populating boundry values
    for (int i = 1; i <= no_coin_box; i++)
    {
        coinbox[i] += coinbox[i - 1];
        
    }
    //counting the occurances of coins
    for(int i = 1 ; i <= no_coin_box ; i++){
        freq[coinbox[i]]++;
    }
    // suffix sum for calculating the atleast occurances 
    for(int i = no_coin_box ; i >=1 ; i--){
        freq[i-1] = freq[i] + freq[i-1];
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        cout << freq[x] << endl;
    }

    return 0;
}
