#include<iostream>
#include<unordered_set>

using namespace std;

bool CheckSpell(string s){
    string TC = "Timur" ;
    if(s.length() != TC.length())
    {
        return false ;
    }
    else{
        unordered_set<char> uset ;
        for(char i :s){
            uset.insert(i) ;
        }
        bool result = false ;
        for(char i : TC){
            if(uset.find(i) == uset.end()){
                return false ;
            }
        }
        
    }
    return true ; 

}
int main(){
    int t ;
    cin >> t;
    string tc ;
    while(t--){
        int n = 0 ;
        cin >> n ;
        cin >> tc ;
        if(CheckSpell(tc)){
            cout << "YES" << endl ;
        }
        else{
            cout << "NO" << endl ;
        }
        tc.clear() ;
    }
    
    return 0;
}