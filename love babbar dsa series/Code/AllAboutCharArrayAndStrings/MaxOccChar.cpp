#include<iostream>


using namespace std;

char MaxOccChar(string s ){
    int maxi = INT32_MIN , ans = 0 ;
    int char_freq[26] = {0} ;

    for(int i = 0 ; i < s.length() ; i++){
        if(isupper(s[i]))
        {
            char_freq[s[i]-65]++;
        }
        else{
            char_freq[s[i]-97]++ ;

        }
    }
    for(int i = 0 ; i < 26 ; i++){
        if(char_freq[i]>maxi){
            ans = i ;
            maxi = char_freq[i] ;
        }
         
    }
    return (ans+97) ;
}
int main(){
    int t ;
    cin >> t ;
    while(t--)
    {
        string TestCase ;
        getline(cin>>TestCase,TestCase);
        cout << MaxOccChar(TestCase) << endl ;

    }
    
    return 0;
}