#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#define ll long long 


using namespace std;

ll ConsecutiveSumOfMod(vector<ll > test,ll  k , long long  n ){
    vector<priority_queue<ll>>store(k) ;
    long long  m = 0 , final_sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        store[i%k].push(test[i]) ;
    }
    for(int p = 0 ; p < k ; p++){
        final_sum += store[p].top() ;
    }
    store.clear();
    return final_sum ;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long t = 0 , k =  0 , n = 100 ;
    vector<long long>tc(100) ;
    cin >> t ;
    while(t--)
    {
        cin >> n >> k ;
        for(int i = 0 ; i < n ; i++){
            cin >> tc[i] ;
        }
        cout << ConsecutiveSumOfMod(tc,k, n) << endl;
    }

    
    return 0;
}