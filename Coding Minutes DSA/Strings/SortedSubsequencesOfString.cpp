#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;

void Subsequence(string input , string output, vector<string>& v){

    if(input.size() == 0 ){
        v.push_back(output) ;
        return;
    }
    //  appending first character 
    Subsequence(input.substr(1),output+input[0],v) ;
    // without appending first character 
    Subsequence(input.substr(1),output,v) ;

}
bool comp(string s1, string s2 ){
    if(s1.length() == s2.length() ){
        return s1 < s2 ;
    }
    return s1.length() < s2.length() ;
}
int main(){
    string input = "abcd" ;
    string output = "" ;
    vector<string > v ;
    Subsequence(input,output,v) ;
    sort(v.begin(),v.end(),comp) ;

    for(string i : v){
        cout << i << " " ;
        
    }
    return 0;
}