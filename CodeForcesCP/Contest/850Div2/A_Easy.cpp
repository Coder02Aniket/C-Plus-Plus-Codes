#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //#ifndef ONLINE_JUDGE

        freopen("input.txt","r", stdin);

        //freopen("output.txt","w", stdout);

        //freopen("errors.txt","w",stdout);

    //#endif
    int tc , n , A = 0 , B = 0;
    cin>> tc ;
    while(tc--){
        cin >> n ;
        A = 0 ;
        B = 0 ;
        // for(int i= 1 ; A + B <= n ; i++){

        //     A = A + min(i,n-(A+B)) ;
        //     for(int j =(i) + 1 ; j < i + 3 && A + B <= n   ; j++ ){

        //        B = B + min(j,n-(A+B));

        //     }
        //     i = i + 2;
        //     if(A + B  == n){
        //         break ;
        //     }

        // }
        int i = 1 ,c = n ;
        while(n >= 0){
            A = A + min(i,c-(A+B));
            i = i + 1 ;
            B = B + min(i + 3 , c -(A + B)) ;
            i = i + 2 ;
            n = n - (A + B) ;
        }

        cout << A << " " << B << endl ;
    }



    return 0;
}