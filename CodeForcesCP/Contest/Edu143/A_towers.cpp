#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE

        freopen("input.txt", "r", stdin);

        freopen("output.txt","w", stdout);

        freopen("errors.txt","w",stderr);

    #endif
    int tc, ta, tb, flag = 1;
    cin >> tc;
    while (tc--)
    {
        cin >> ta >> tb;
        string A, B;
        cin >> A >> B;

        // int flagA = check(A), flagB = check(B), flag = 0, compa = 0;
        // if (flagA || flagB)
        // {
        //     if (flagA)
        //     {
        //         compa = B.size() - 1;
        //         for (int i = A.size()-1; i >= flagA && compa >= 1; i--)
        //         {
        //             if (A[i] == B[compa--])
        //             {
        //                 flag = 1;
        //                 break;
        //             }
        //         }
        //         if (flag)
        //         {
        //             cout << "NO" << endl;
        //         }
        //         else
        //         {
        //             cout << "YES" << endl;
        //         }
        //     }
        //     else
        //     {
        //         compa = A.size() - 1;
        //         for (int i = B.size()-1; i >= flagB && compa >= 1; i--)
        //         {
        //             if (A[i] == B[compa--])
        //             {
        //                 flag = 1;
        //                 break;
        //             }
        //         }
        //         if (flag)
        //         {
        //             cout << "NO" << endl;
        //         }
        //         else
        //         {
        //             cout << "YES" << endl;
        //         }
        //     }
        // }
        // else
        // {
        //     cout << "YES" << endl;
        // }

        while (A.size() > 1)
        {
            if (A.back() != B.back())
            {
                B.push_back(A.back());
                A.pop_back();
            }
            else
            {
                break;
            }
        }
        while (B.size() > 1)
        {
            if (A.back() != B.back())
            {
                A.push_back(B.back());
                B.pop_back();
            }
            else
            {
                break;
            }
        }
        // cout << A << " " << B << endl ;
        flag = 1;
        for (int i = 1; i < A.size(); i++)
        {
            if (A[i - 1] == A[i])
            {
                flag = 0;
            }
        }
        for (int i = 1; i < B.size(); i++)
        {
            if (B[i - 1] == B[i])
            {
                flag = 0;
            }
        }
        if(flag == 1 ){
            cout << "YES" << endl ;

        }else{
            cout << "NO" << endl ;
        }
    }

    return 0;
}