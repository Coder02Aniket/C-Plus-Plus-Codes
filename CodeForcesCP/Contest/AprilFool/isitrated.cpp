#include<bits/stdc++.h>


using namespace std;


int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //#ifndef ONLINE_JUDGE

        //freopen("input.txt","r", stdin);

        //freopen("output.txt","w", stdout);

        //freopen("errors.txt","w",stderr);

    //#endif
    string tc ;
    int num ;
    cin >> tc ;
    cin >>num ;
    if(tc == "ABC" && num <2000 || tc == "ARC" && num <2800 || tc == "AGC" && num >=1200){
        cout << "YES\n" ;
    }else{
        cout << "NO\n" ;
    }




    return 0;
}