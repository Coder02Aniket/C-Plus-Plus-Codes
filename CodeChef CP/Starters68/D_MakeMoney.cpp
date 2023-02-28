#include<bits/stdc++.h>


using namespace std;

void solve(){
    int n , x , c , max_sum1=0, max_sum2=0, max_sum=0, temp_sum=0 , start = 0 , last = 0;
    cin >> n >> x >> c;
    vector<int>vec(n,0);
    for(int i = 0 ; i < n ; i++){
        cin >> vec[i];
        max_sum = max_sum  +  vec[i] ;
    }

    
    sort(vec.begin(),vec.end());
    max_sum1 = max_sum2 = max_sum ;
    last =  x - (vec[start++]+ c) ;
    while(last > 0 && start < n){
        max_sum1 += last ;
        last = x - (vec[start++]+ c) ;
    }

    cout << max_sum1 << endl ;
    
    

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int t ;
    cin >> t; 
    while (t--)
    {
        solve();   
    }



    return 0;
}