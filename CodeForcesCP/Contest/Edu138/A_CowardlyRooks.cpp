#include<bits/stdc++.h>



using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t , n , m , row , col;
    bool flag = false ; 
    cin >> t ;
    while(t--){
        cin >> n >> m ;
        // set<pair<int,int>>q ;
        // flag = false ;

        for(int i = 0 ; i  < m ;i++){
            cin >> row >> col ;

            // for(int i = 1 ; i <= n ; i++){
            //     if(q.find(make_pair(i,col))==q.end() || q.find(make_pair(row,i))==q.end()){ 
            //         q.insert(make_pair(i,col)) ;
            //         q.insert(make_pair(row,i)) ;
                    
            //     }
            //     else{
            //         flag = true ; 
            //         break ;
            //     }

            
        }
        if(m < n ){
            cout << "YES" << endl ;
        }
        else if(m >=n ){
            cout << "NO" << endl ;
        }
        // for(set<int>a : TwoD){
        //     if(a.size()>1){
        //         flag = true ;
        //     }
        // }
        // if(flag || q.size() == 1){
        //     cout << "NO" << endl ;
        // }
        // else{
        //     cout << "YES" << endl ;
        // }
        // q.clear() ;
        
    }
    return 0;
}