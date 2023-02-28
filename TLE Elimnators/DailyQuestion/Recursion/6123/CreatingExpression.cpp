#include <bits/stdc++.h>

using namespace std;
#define int long long

bool RecursionG(vector<int> &arr, int n, int ans, int curr_eqn_sum, int ind = 1)
{

    if (ind == n)
    {
        if(curr_eqn_sum == ans){
            return true ;
        }
        return false ;
    }

    // Adding Plus sign

    bool way1 =  RecursionG(arr, n, ans, curr_eqn_sum + arr[ind], ind + 1);

    // adding minus sign

    bool way2 = RecursionG(arr, n, ans, curr_eqn_sum - arr[ind], ind + 1);

    return way1 || way2 ;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE

    // freopen("input.txt","r", stdin);

    // freopen("output.txt","w", stdout);

    // freopen("errors.txt","w",stdout);

    // #endif
    int n, x, curr_eqn_sum = 0, flag = 0;
    cin >> n >> x;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    curr_eqn_sum = arr[0];
    if(RecursionG(arr, n, x, curr_eqn_sum)){
        cout << "YES" << endl ;

    }else{
        cout << "NO" << endl ;
    }

    return 0;
}