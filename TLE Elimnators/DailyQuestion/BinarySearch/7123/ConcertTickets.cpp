#include <bits/stdc++.h>

using namespace std;
#define int long long
int solver(int ask, multiset<int>&ticket_price)
{
    multiset<int>::iterator it;
    int ans;
    // need to use set specific upper bound for fast implementation
    it = ticket_price.upper_bound(ask);
    if (it == ticket_price.begin())
    {
        ans = -1;
    }
    else
    {
        ans = *(--it);
        ticket_price.erase(it);
    }
    return ans;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE

    // freopen("input.txt", "r", stdin);

    // freopen("output.txt","w", stdout);

    // freopen("errors.txt","w",stdout);

    // #endif
    int no_of_ticket, no_of_customers,a;
    cin >> no_of_ticket >> no_of_customers;
    vector<int> customer_price(no_of_customers, 0);
    multiset<int> ticket_price;

    for (int i = 0; i < no_of_ticket; i++)
    {

        cin >> a ;
        ticket_price.insert(a);
    }
    for (int i = 0; i < no_of_customers; i++)
    {
        cin >> customer_price[i];
    }

    for (int i = 0; i < no_of_customers; i++)
    {
        cout << solver(customer_price[i], ticket_price) << endl;
    }

    return 0;
}