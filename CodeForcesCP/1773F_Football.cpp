#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int n , a, b , a_temp = 0 , b_temp = 0 ;
    cin >> n >> a >> b;
    a_temp = a , b_temp = b;

    for(int i = 1 ; i <= n ;i++){
        if(n == 1){
            if(a == b){
                cout << 1 << endl ;
            }
            else{
                cout << 0 << endl ;
            }
            cout << a << ":"<<b << endl ;
        }
        if(n >= a+ b){
            cout << (n - (a+b)) << endl ;
            while(i <= n){
                if(a_temp>0){
                    cout << 1 << ":" << 0 << endl; 
                    a_temp--;                
                }
                else if(b_temp>0){
                    cout << 0<<":" << 1 << endl ;
                    b_temp--;
                }
                else{
                    cout << 0<<":"<<0<<endl ;
                }
                i++;
            }
        }
        else if(n < a+ b){
            if(i == n ){
                cout << a_temp << ":" << b_temp << endl ;
            }
            else if()
        }
    }





    return 0;
}