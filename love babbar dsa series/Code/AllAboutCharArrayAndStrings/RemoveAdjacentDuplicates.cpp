#include<iostream>


using namespace std;

string RemoveAdjDups(string tc){
    // tc.insert(0,"1");
    // int prev_location = 0 ;
    for(int i = 1 ; i < tc.length() ; i++){

        if(tc[i-1] == tc[i]){
            // prev_location = i - 2 ;
            tc.erase(i-1,2);
            i -= 2 ;
        }
    }
    // tc.erase(0,1) ;
    return tc ;
}
int main(){
    cout << RemoveAdjDups("abbaca") ;
    
    return 0;
}