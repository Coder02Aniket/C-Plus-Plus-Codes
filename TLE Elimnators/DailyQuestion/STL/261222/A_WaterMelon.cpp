#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    float n  , ans;
    cin >> n ;

    
    if(!remainder(n,2)&& n != 2){
        cout << "YES" << endl ;

    }
    else{
        cout << "NO" <<endl ;
    }




    return 0;
}