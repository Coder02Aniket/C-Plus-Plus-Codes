#include<bits/stdc++.h>


using namespace std;


int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(NULL);

    //#ifndef ONLINE_JUDGE

        // freopen("input.txt","r", stdin);

        //freopen("output.txt","w", stdout);

        //freopen("errors.txt","w",stdout);

    //#endif
    
    int tc , ans = 0 ;
    cin >> tc ;
    // string test ;
    while(tc--){
        int strlen ;
        cin >>strlen ;

        string  test ;
        cin >> test ;
        
        ans = strlen ;

        // for(int i = 0 ; (i <= strlen/2 ) ; i++){
        //     if((test[i] == '0' &&  test[strlen-1-i] == '1') || (test[i] == '1' && test[strlen-1-i] == '0')){
        //         ans = ans -  2 ;
        //     }
        // }
        int start = 0 , end = strlen -1 ;
        while(start < end){
            if((test[start] == '0' &&  test[end] == '1') || (test[start] == '1' && test[end] == '0')){
                ans = ans - 2 ;
                
            }else{
                break;
            }
            start++ ;
            end--;
        }
        if(ans <= 0){
            cout << 0 << endl ;
        }else{
            cout << ans << endl ;
        }
    }



    return 0;
}