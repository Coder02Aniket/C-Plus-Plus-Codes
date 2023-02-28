#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // ##### LAST SUBMISSION ##############
    int t ;
    cin >> t;
    while(t--){
        int k , n , diff = 1  , i = 1 , count  = 1 ;
        cin >> k >> n;
        if(k == n ){
            while(i <= n){
                cout << i++ << " " ;
            }
        }
        else{ 
            // while(i + diff <= n && count < k && n - i > k - count ){
            //     i = i + diff ;
            //     cout << i << " ";
            //     diff = diff + 1 ;
            //     count = count + 1 ;
            // }
            // while( k - count > 0 ){
            //     i = i + 1 ;
            //     cout << i << " ";
            //     count = count + 1 ;
            // }
            // Thanks to karan Mashru for explaination 
            for(int j = 1; j <= k ; j++){
                cout << i << " ";
                if(n - i >= k - count){
                    i = i + diff;
                    diff++;
                }
                else{
                    i++;
                }
            }
        }
        cout << endl ;

    }




    return 0;
}