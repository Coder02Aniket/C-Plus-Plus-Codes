/*Given an array of n integers and an number 5 denoting the target sum find two distinct integers that can pair up to form target sum let us asssume thtat there will be only one pair */
#include<iostream>
#include<vector>

using namespace std;
vector<string> fizzbuzz(int n){
    vector<string> result ;
    for(int i = 0 ; i < n+1 ; i++){
        if(i % 3 == 0 && i > 1){
            result.push_back("Fizz");
            
        }
        else if(i % 5 == 0 && i > 1){
            result.push_back("Buzz") ;
        }
        else{
            result.push_back(to_string(i)) ;
        }
    }
    return result ;
}

int main(){
    vector<string> run (fizzbuzz(15)) ;
    for(string i : run ){
        cout << i <<" " ;
    }
    
    return 0;
}