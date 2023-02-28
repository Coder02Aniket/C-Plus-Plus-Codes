#include<iostream>


using namespace std;


int main(){
    // ios::sync_with_stdio(false) ;
    // cin.tie(0) ;
    int t ;
    cin >> t;
    while(t--){
        /* lcm(a,b)/gcd(a,b) = ab / gcd(a,b)^2  
        https://codeforces.com/blog/entry/106553?#comment-949496
        */
       int n ;
       cin >> n ;
       int count = n + 2*((n/2) + (n/3));
       cout << count << endl ;
       count = 0 ;
    }
    
    return 0;
}