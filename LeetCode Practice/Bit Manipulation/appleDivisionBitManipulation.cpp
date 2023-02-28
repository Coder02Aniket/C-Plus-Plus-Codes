#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;
    // n = 5 ;
    long long sum = 0;
    vector<long long> arr(n,0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    long long  no_of_combination = 1 << n , grp1 , grp2 , diff = INT32_MAX;
    //no_of_combination = 2^n
    for (int comb = 1 ; comb < no_of_combination; comb++)
    {
        grp1 = sum;
        for (int i = 0; i < n; i++)
        {
            // checks for every value from array if that bit is set 
            if ((comb & (1 << i)) != 0)
            {
                grp1 = grp1 -  arr[i];
                
            }
        }
        grp2 = sum - grp1 ;
        diff = min(diff,abs(grp1-grp2));
    }
    cout << diff << endl ;


    return 0;
}