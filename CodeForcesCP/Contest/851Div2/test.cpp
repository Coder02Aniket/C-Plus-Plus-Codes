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
    int tc, n, flag = 0;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        flag = 0;

        vector<int> arr(n, 0), count_of_two(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(i == 0){
                count_of_two[i] = (arr[i]==1)?0:1 ;
            }
            else{count_of_two[i] = (count_of_two[i - 1]) + ((arr[i] == 1) ? 0 : 1);}
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (count_of_two[i] == count_of_two[n - 1] - count_of_two[i])
            {
                flag = i + 1 ;
                break ;
            }
        }
        if(flag > 0){
            cout << flag << endl ;
        }else{
            cout << -1 << endl; 
        }
    }

    return 0;
}