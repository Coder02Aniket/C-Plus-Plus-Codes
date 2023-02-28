#include<iostream>
#include<cstring>

using namespace std;

string Replace(string tc){
    string str_to_replace = "@40" ;
    for(int i = 0 ; i < tc.length() ; i++){ 
        if(tc[i] == ' '){
            tc.erase(i,1) ;
            tc.insert(i++,1,'@') ;
            tc.insert(i++,1,'4') ;
            tc.insert(i++,1,'0') ;
        }

    }
    return tc ;
}
int main(){
    cout << Replace("Aniket Shankar Nangare") ;

    
    return 0;
}