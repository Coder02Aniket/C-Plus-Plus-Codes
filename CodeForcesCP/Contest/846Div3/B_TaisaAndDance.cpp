
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;
 
        if (n == 2)
        {
            cout << s - r << " " << r << endl;
        }
        else if(r%(n-1)==0){
            for (int i = 1; i <=n-1; i++)
            {
                cout<<r/(n-1)<<" ";
            }
            cout<<s-r<<endl;
            
        }
        else {
            for (int i = 1; i <=r%(n-1); i++)
            {
                cout<<r/(n-1)+1<<" ";
            }
            for (int i = 1; i <=n-1-r%(n-1); i++)
            {
                cout<<r/(n-1)<<" ";
            }
            cout<<s-r<<endl;
            
        }
    }
 
    return 0;
}