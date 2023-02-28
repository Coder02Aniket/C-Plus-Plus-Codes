#include<bits/stdc++.h>


using namespace std;
#define M 998244353
#define ll long long 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t ,n, mul = 1 , k ;
    cin >> t;
    vector<ll> arr,odd_c,even_c;
    while(t--){
        ll one_c = 0 ,start = 0 , temp = 0;
        cin >> n ;
        mul = 1 ;
        for(int i = 0 ; i < n ;i++){
            cin >> temp ; 
            arr.push_back(temp);
            if(temp== 1){
                one_c++;
            }
            else if(temp%2){
                odd_c.push_back(temp);
            }
            else if(temp%2==0){
                even_c.push_back(temp);
            }
        }
        sort(even_c.begin(),even_c.end());

        for(int i = 0 ; i < one_c && i < even_c.size(); i++){
            even_c[i]++;
        }

        for(int i : even_c){
            mul *= i ;
            mul %= M ;
        }
        for(int i : odd_c){
            mul *= i ;
            mul %= M ;
        }    
        cout << mul%M<<endl;
        odd_c.clear();
        even_c.clear();
        arr.clear();

    }




    return 0;
}