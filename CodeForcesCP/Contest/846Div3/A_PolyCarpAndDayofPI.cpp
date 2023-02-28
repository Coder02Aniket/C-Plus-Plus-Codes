#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc , count = 0;
    string pi = "314159265358979323846264338327",ts;
    cin >> tc ;
    while(tc--){
        cin >> ts ;
        count = 0 ;
        for(int i = 1 ; i <= ts.size() ;i++){
            if(pi.substr(0,i)==ts.substr(0,i)){
                count = count + 1 ;
            }
        }
        cout << count  << endl ;
    }

    




    return 0;
}