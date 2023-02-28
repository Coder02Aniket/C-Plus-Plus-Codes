#include<bits/stdc++.h>


using namespace std;

bool RecursivePalindromeChecker(string s , int first ){
    if(first>=s.size()/2){
        return true ;
    }
    else if(s[first]!= s[s.size()-first-1] ){
        return false ;
    }
    return RecursivePalindromeChecker(s,first+1);

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    string  a = "rhar";

    if(RecursivePalindromeChecker(a,0)){
        cout << "A Palindrome..." << endl ;
    }else{
        cout << "Not A palindrome...." << endl ;
    }



    return 0;
}