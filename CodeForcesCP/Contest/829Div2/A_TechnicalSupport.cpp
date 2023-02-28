#include<bits/stdc++.h>



using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t  , n;
    char token ;
    cin >> t;
    while(t--){
        // bool flag = false ;
        cin >> n ;
        priority_queue<char> pq ;
        for(int i = 0 ; i < n ;i++){
            cin >> token ;
            if(token=='Q'){
                pq.push(token);
            }
            else{
                if(!pq.empty())
                    pq.pop();

            }

        }
        if(pq.size()>0){
            cout << "No" << endl ;
        }
        else{
            cout << "Yes" << endl ;
        }
        
    }

    return 0;
}