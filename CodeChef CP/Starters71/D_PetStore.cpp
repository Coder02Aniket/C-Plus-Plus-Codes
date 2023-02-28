#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int t ;
    cin >> t ;
    while(t--){

        int n , temp , flag = 1;
        cin >> n ;
        map<int,int>count ;
        for(int i = 0 ; i < n ; i++){
            cin >> temp ;
            count[temp]++;
        }
        for(pair<int,int> i : count){
            if(i.second%2){
                flag = 0 ;
                break ;
            }
        }
        if(flag){
            cout << "yes" << endl ;
        }
        else{
            cout << "no" << endl ;
        }
    }




    return 0;
}