#include<iostream>
#include<string>
#include<unordered_set>


using namespace std;

string spaceto20(string s ){
    string strcpo ;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == ' '){
           strcpo.append("%20");
           continue;
        }

        strcpo = strcpo + s[i];
    }
    return strcpo ;
}


int main(){
    string tc;
    getline(cin,tc) ;
    
    cout << spaceto20(tc);
    
    return 0;
}