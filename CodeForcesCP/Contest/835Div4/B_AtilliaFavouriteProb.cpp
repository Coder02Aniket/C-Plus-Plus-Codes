#include<bits/stdc++.h>



using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t ,size , max_letter  = 0; 
    char letter ;
    
    cin >> t; 
    while(t--){
        max_letter = 0 ;
        letter = 0 ;
        cin >> size ;
        for(int i = 0 ; i < size ; i++){
            cin >> letter ;
            max_letter = max(max_letter,(int)letter);
        }
        cout << max_letter - 96  << endl ;
    }
    return 0;
}