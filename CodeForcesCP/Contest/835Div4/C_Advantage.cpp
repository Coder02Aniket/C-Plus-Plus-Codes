#include<bits/stdc++.h>



using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t , len , temp ,diff; 
    vector<int>arr;
    cin >> t ;
    while(t--){
        priority_queue<int>pq ;
        cin >> len ;
        for(int i = 0 ; i < len ;i ++){
            cin >> temp ; 
            pq.push(temp) ;
            arr.push_back(temp) ;
        }
        for(int i : arr){
            diff = i - pq.top();
            if(diff == 0 ){
                pq.pop() ;
                diff = i - pq.top() ;
                pq.push(i);
            }
            cout << diff << " " ;
        }
        cout << endl ;
        arr.clear() ;
        
    }
    
    return 0;
}