#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //#ifndef ONLINE_JUDGE

        // freopen("input.txt","r", stdin);

        //freopen("output.txt","w", stdout);

        //freopen("errors.txt","w",stdout);

    //#endif
    int tc ,size = 0 ;
    pair<int,int>spos ;
    cin >> tc ;
    string test ; 
    while(tc--){
        bool flag = false ;
        cin >> size ;
        cin >> test ;
        spos = {0,0};
        for(int i = 0 ; i < size ;i++){
            if(test[i]== 'U'){
                spos.second += 1 ;
            }else if(test[i]=='D'){
                spos.second -= 1 ;
            }else if(test[i]=='L'){
                spos.first -= 1 ;
            }else {
                spos.first += 1 ;
            }

            if(spos.first == 1 && spos.second == 1 ){
                flag = true ;
                break ;
            }
        }
        if(flag){
            cout << "YES" << endl ;
        }else{
            cout << "NO" << endl ;
        }
    }



    return 0;
}