#include <bits/stdc++.h>

using namespace std;

#define int long long
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE

    // freopen("input.txt","r", stdin);

    // freopen("output.txt","w", stdout);

    // freopen("errors.txt","w",stdout);

    // #endif
    int tc, num, r;
    cin >> tc;
    function<int(int)> digi_sum = [&](int number)
    {
        int r = 0 ;
        while (number != 0)
        {
            r += number % 10;
            number /= 10;
        }
        return r;
    };
    while (tc--)
    {
        cin >> num;
        int start = 0 , end = num , mid = 0 ;
        while(start <= end){
            mid = (start + end)/2 ;
            if(abs(digi_sum(mid)-digi_sum(num-mid)) <= 1 ){
                cout << mid << " " << num - mid << endl ;
                break; 
            }else if(digi_sum(mid)<digi_sum(num-mid)){
                start = mid + 1 ;
            }else{
                end = mid -1 ;
            }
        }
    }

    return 0;
}