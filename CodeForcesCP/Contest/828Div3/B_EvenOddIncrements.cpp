#include<bits/stdc++.h>


#define ll long long 
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t , n , q , temp , even_sum , odd_sum , even_size , odd_size , q_type , q_num, total ;
    // vector<int>even_ele,odd_ele;
    string query;
    cin >> t ;
    while(t--){
         even_sum = 0 , odd_sum = 0 , even_size = 0 , odd_size = 0 , total = 0 ;
        cin >> n >> q ;
 
        for(int i = 0 ; i < n ; i++){
            cin >> temp ;
            if(temp%2){
                total += temp ;
                odd_size += 1 ;
            }
            else{
                total += temp ;
                even_size += 1 ;
            }
        }
        for(int i = 0 ; i < q ; i++){
            cin >> q_type >> q_num ;
            
            if(q_type){
                if(q_num%2==1){
                    total += (odd_size*q_num) ;
                    even_size += odd_size ;
                    odd_size = 0 ;
                }
                else{
                    total += q_num * odd_size ;
                }
            }
            else{
                if(q_num%2){
                    total += even_size * q_num ;
                    odd_size += even_size ;
                    even_size = 0 ;

                }
                else{ 
                    total += (q_num)*even_size;
                }
            }
            cout << total << endl ;       

        }



    }
    return 0;
}