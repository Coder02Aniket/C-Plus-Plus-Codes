#include<bits/stdc++.h>



using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int burst_t[20] , waiting_t[20] , i , n ;
    float waiting_avg , turnAround_avg ;
    cout << "\n Enter the number of processes--" ;
    cin >> n; 
    for(int i = 0 ; i < n ; i++){
        cout << "\nenter burst time for process " << i  << endl ;
        cin >> burst_t[i] ;

    }
    return 0;
}