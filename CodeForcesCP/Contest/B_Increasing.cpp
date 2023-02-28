#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>



using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t , flag ,n ,temp;

    cin >> t; 
    vector<int>a ;
    while(t--){
        cin >> n ;
        for(int i = 0 ;i < n ; i++){
            cin >> temp ; 
            a.push_back(temp) ;
        }
        flag = 0 ;
        sort(a.begin(),a.end());
        // for(int i : a){
        //     cout << i << endl ;
        // }
        for(int i = 0 ; i < n-1; i++){
            if(a[i] == a[i+1]){
                flag = 1 ;
                break ;
            }
        }
        if(flag == 1 ){
            cout << "NO" << endl ;
        }
        else{
            cout << "YES" << endl ;
        }
        a.clear() ;
    }
    return 0;
}