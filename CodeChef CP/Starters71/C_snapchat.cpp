#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, streak = 0, chef[1000], chefina[1000] , t_streak=0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> chef[i];
        }
        for (int i = 0; i < n ; i++)
        {
            cin >> chefina[i];
        }
        for(int i = 0 ; i < n ;i++){
            if(chef[i] != 0 && chefina[i] != 0){
                t_streak++;
                streak = max(streak , t_streak);
            }
            else{
                t_streak = 0 ;
            }
        }
        cout << streak << endl ;
    }

    return 0;
}