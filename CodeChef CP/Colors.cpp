#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;

    cin>>t;

    

    while(t--) {

        int x,y,z;

        cin>>x>>y>>z;

        

        int a[3] = {x,y,z};

        sort(a, a+3, greater<int>());

        int ans =0;

        

        for(int i=0;i<3;i++) {

            if(a[i]>0 ) {

                ans++;

                a[i]--;

            }

        }

        

        for(int i=0;i<3;i++) {

            for(int j=i+1;j<3;j++) {

                if(a[i]>0 &&a[j]>0 ) {

                    ans+=1;

                    a[i]--;

                    a[j]--;

                }

            }

        }

        

        cout << ans << "\n";

    }

	return 0;

}

