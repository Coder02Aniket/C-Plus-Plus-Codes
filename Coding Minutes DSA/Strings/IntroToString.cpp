#include<iostream>
#include<string>
#include<vector>


using namespace std;


int main(){
    string paragraph = "we are learning about STL strings , STL strings classs is quite powerful" ;
    string word ;
    getline(cin , word) ;
    cout << paragraph.find(word) << endl ;
    
    return 0;
}