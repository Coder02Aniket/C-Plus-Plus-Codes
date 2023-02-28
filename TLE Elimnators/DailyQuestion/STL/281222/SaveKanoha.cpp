#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int t ;
    cin >> t ;
    while(t--){
        int n , z  , temp , count = 0 ;
        cin >> n >> z ;
        priority_queue<int>pq ;
        for(int i = 0 ; i < n ;i++){
            cin >> temp ;
            pq.push(temp);
        }
        while(z > 0 && !pq.empty()){
            temp = pq.top();
            z = z - temp ;
            pq.pop();
            pq.push(temp/2);
            count++;
        }
        if(count>=n){
            cout << "Evacuate" << endl ;
        }
        else{
            cout << count << endl ;
        }
    }




    return 0;
}