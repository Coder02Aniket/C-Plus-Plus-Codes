#include<bits/stdc++.h>



using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t ;
    cin >> t;
    // set<string>valid = { "esY", "Yes", "sYe","es", "Ye","sY"};
    string s ="";
    for(int i = 0 ; i < 25  ; i++){
        s+= "Yes" ;
    }
    while(t--){
        bool check = true ;
        string input = "";
        cin >> input ;
        // for(int i = 0 ; i < input.length() ; i++){
        //     if(input[i] != 'Y' && input[i] != 'e' && input[i] != 's'){
        //         check = false ;
        //         break ;
        //     }
        // }
        // int  i ; 
        // for(i = 0 ; i < (input.length()/3) ; i+=3){
        //     // if(valid.find(to_string(input[i])) == valid.end()){
        //     //     check = false ;
        //     //     break ;
        //     // }
        //     if(valid.find(input.substr(i,3)) == valid.end()){
        //         check = false ;
        //         break ;
        //     }
        if(s.find(input)!=-1){
            cout << "YES" << endl ;
        }
        else{
            cout << "NO" << endl ;
        }
            

        // }
        // if((input.length() % 3 ) == 2 ){
        //     if(valid.find(input.substr(i,2)) == valid.end()){
        //         check = false  ;
        //     }
        //     // cout << input.substr(i,2) << endl ; 
        // }
        // else if ((input.length() % 3) == 1 ) {
        //     if(input[0] != input[input.length()-1] ){
        //         check = false ;
        //     }
        // }
        // if(check){
        //     cout << "YES" << endl ;
        // }
        // else{
        //     cout << "NO" << endl ;
        // }
        
    }
    
    return 0;
}