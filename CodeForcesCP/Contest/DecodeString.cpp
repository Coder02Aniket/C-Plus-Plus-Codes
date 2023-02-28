// https://codeforces.com/contest/1729/problem/B
#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long 

using namespace std;

string DecodeString(string  num){
    ll i = 0 ;
    ll m ;
    string result = "" ;

    // cout << num.substr(1,2) << endl ;
    // vector<int>num_array ;
    // int tc,big_num;
    // while (num > 0)
    // {
    //     tc = num % 10 ;
    //     num_array.push_back(tc) ;
    //     num = num / 10 ;
    // }
    // int i = 0 ;
    // for(; i < num_array.size() - 2 ; i++){
    //     if(num_array[i+2] == 0){
    //         big_num = num_array[i]*10 + num_array[i+1] ;
    //         cout << big_num<<endl ;
    //         result.push_back(big_num+96) ;
    //     }
    //     else{
    //         result.push_back(num_array[i]+96) ;
    //     }
    // }
    // while(i < num_array.size()){
    //     result.push_back(num_array[i++]+96) ;
        
    // }
    // reverse(result.begin() , result.end() ) ;
    // 1111100
    for( i = 0 ; i < num.length() - 2; i++){
        if(num[i+2]== '0' && num[i+3]!='0'){
            m = stoi(num.substr(i,2)) + 96 ;
            // cout << m << endl ; 
            result.push_back(char(m)) ;
            i += 2;
        }
        else if(num[i] == '0'){
            continue;
        }
        else if(num[i+2] == '0' && num[i+3]== '0'){
            m = num[i] + 48 ;
            result.push_back(char(m)) ; 
           i++;
            m = stoi(num.substr(i,2)) + 96 ;
            result.push_back(char(m)) ;
            i += 2;

        }

        else{
           m = num[i] + 48 ;
           result.push_back(char(m)) ; 
        }
    }
    while(i < num.length()){
        m = num[i] + 48 ;
        // cout << m << endl ;
        if(num[i] == '0'){
            i++;
            continue;
        }
        result.push_back(char(m)) ; 
        i++;
    }
    return result ;


}
int main(){
    int t , n ;
    string a;
    cin >> t;
    while(t--){
        cin >> n >> a;
        cout << DecodeString(a) << endl ;
    }
    
    return 0;
}