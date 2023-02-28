#include<bits/stdc++.h>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int t , n , temp ;
    set<int , greater<int>>arr,greatest;
    cin >> t ;
    set<int,greater<int>>::iterator itr1,itr2 ;
    while(t--){
        cin >> n ;
        int ans = 0 ;
        for(int i =0 ; i < n; i++){
            cin >> temp ;
            if(arr.find(temp) != arr.end())
                greatest.insert(temp);
            else{
                arr.insert(temp);
            }
        }
        itr1 = arr.begin() ; 
        itr2 = greatest.begin();
        if(*itr1 > *(itr2)+1){
            ans = *(itr1);
        }
        else{
            ans = *(itr2) + 1 ;
        }
        cout << ans << endl ;
        arr.clear();
        greatest.clear();


    }
    




    return 0;
}