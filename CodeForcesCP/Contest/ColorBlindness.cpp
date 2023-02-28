#include<iostream>
#include<vector>

using namespace std;

bool IsSame(string s1,string s2){
    int size = s1.length() ;

    for(int i = 0 ; i < size  ; i++){
        if(s1[i] == 'G'){
            s1.replace(i,1,"B");
        }
        if(s2[i] == 'G'){
            s2.replace(i,1,"B") ;
        }

    }
    // cout << s1 << " " << s2 << endl;
    
    if(s1.compare(s2) == 0 ){
        return true ; 
    }
    return false ;

}
int main(){
    int t ;
    cin >> t;
    string tc1,tc2 ;
    while(t--){
        int n = 0 ;
        cin >> n ;
        cin >> tc1 ;
        cin >> tc2 ;

        if(IsSame(tc1,tc2)){
            cout << "YES" << endl ;
        }
        else{
            cout << "NO" << endl ;
        }
        tc1.clear() ;
        tc2.clear() ;
    }
    return 0;
}