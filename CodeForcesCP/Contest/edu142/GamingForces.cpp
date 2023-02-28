#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int tc ;
    cin >> tc ;
    while(tc--){
        int a , count = 0 , temp ;
        cin >> a ;
        for(int i = 0  ; i < a ; i++){
            cin >> temp ;
            if(temp == 1){
                count++;
            }
        }
        cout << a - count/2<< endl ;
    }




    return 0;
}