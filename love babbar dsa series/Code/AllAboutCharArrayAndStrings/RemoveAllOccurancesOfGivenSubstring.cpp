#include<iostream>


using namespace std;

string removeOccurrences(string s, string part){
    int SubStrLen = part.length() ;

    // for(int i = 0 ;i < s.length() - SubStrLen + 1 ; i++){
    //     if(s.substr(i,SubStrLen) == part){
    //         s.erase(i,SubStrLen) ;
    //     }

    // }
    // return s ;
    while(s.find(part)<s.length()){
        int index = s.find(part) ;
        s.erase(index , SubStrLen) ;
    }
    return s ;
}
int main(){
    cout << removeOccurrences("daabcbaabcbc","abc") ;
    
    return 0;
}