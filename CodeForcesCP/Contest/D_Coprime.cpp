#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>



using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t , n , temp ;
    vector<int>arr ;
    cin >> t;
    while(t--){
        cin >> n ; 
        for(int i = 0 ;i < n ; i++){
            cin >> temp ;
            arr.push_back(temp) ;
        }
        
    }
    return 0;
}