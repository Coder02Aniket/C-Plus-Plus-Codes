#include<iostream>
#include<unordered_set>

using namespace std ;
int min_moves(string tc){
    unordered_set<char> uset ;
    for(char i : tc){
        uset.insert(i);
    }
    
    return (uset.size() - 1 );
}
int main(){
    int t ;\
    cin >> t ;
    while(t--){
        string str1 , str2 , str_all;
        cin >> str1 >> str2 ;
        str_all = str1 + str2 ;
        cout << min_moves(str_all)<< endl ;
        str_all.clear() ;
    }
}