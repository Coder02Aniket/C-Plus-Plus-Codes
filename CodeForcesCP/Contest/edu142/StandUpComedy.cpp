#include <bits/stdc++.h>

using namespace std;

#define int long long

// void recursiveStandUp(int a, int b, int c, int d, int alice, int bob, int count)
// {
//     int a1 ,b1 , c1 , e ;
//     if (alice < 0 || bob < 0 || (a == 0 && b == 0 && c == 0 && d == 0))
//     {
//         cout << count << endl;
//         return;
//     }
//     if (a)
//     {
//         alice = a;
//         bob = a;
//         count = a;
//         a = 0;
//     }
//     else if (b && bob)
//     {
//         a1 = min(b,bob);
//         alice += a1;
//         count += a1;
//         b -= a1;
//         bob -= a1;
//     }
//     else if (c && alice)
//     {
//         b1 = min(c , alice );
//         bob += b1;
//         count += b1;
//         c -= b1;
//         alice -= b1;
//     }
//     else if (d )
//     {
//         if (alice == 0 || bob == 0)
//         {
//             count += 1;
//             d = 0 ;
//             if(alice){
//                 bob = -1 ;
//             }else if(bob){
//                 alice = -1  ;
//             }else{
//                 alice = -1 ;
//                 bob = - 1;
//             }

//         }else{
//             e = min(d,min(alice,bob));
//             count += e;
//             alice -= e;
//             bob -=e ;
//             d -= e;
//         }
//     }else{
//         count +=1  ;
//         cout << count << endl;
//         return ;
//     }
//     recursiveStandUp(a, b, c, d, alice, bob, count);
// }
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int a = 1, b = 0, c = 00, d = 1, bc = 0, ad = 0, count = 0;
        cin >> a >> b >> c >> d;
        // recursiveStandUp(a, b, c, d, alice, bob, count);
        if (a == 0)
        {
            count = 1;
        }
        else{
            count = a + min(b,c) *2  + min(a + 1 , abs(b-c)+d) ;
        }
        cout << count << endl;
    }
    return 0;
}