#include<iostream>


using namespace std;

string RemoveAdjDups(string tc){
    string a ;
    a.push_back(tc[0]) ;
    for(int i = 1  ; i < tc.length() ; i++){
        if(a.back() == tc[i]){
            a.pop_back() ;
        }
        else{
            a.push_back(tc[i]) ;
        }
    }
    return a ;
}
int main(){
    cout << RemoveAdjDups("abbaca") ;
    
    return 0;
}