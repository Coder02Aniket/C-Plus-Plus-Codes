// https://codeforces.com/contest/1728/problem/B
/** Very Good Question **/
/**
 * Let's define the value of the permutation p of n integers 1, 2, ..., n (a permutation is an array where each element from 1 to n

occurs exactly once) as follows:

    initially, an integer variable x

is equal to 0
;
if x<p1
, then add p1 to x (set x=x+p1), otherwise assign 0 to x
;
if x<p2
, then add p2 to x (set x=x+p2), otherwise assign 0 to x
;
...
if x<pn
, then add pn to x (set x=x+pn), otherwise assign 0 to x
;
the value of the permutation is x

    at the end of this process. 

For example, for p=[4,5,1,2,3,6]
, the value of x changes as follows: 0,4,9,0,2,5,11, so the value of the permutation is 11

.

You are given an integer n
. Find a permutation p of size n with the maximum possible value among all permutations of size n. If there are several such permutations, you can print any of them.
**/
#include<iostream>
#include<vector>

using namespace std;
bool IsEvenOdd(int n ){
    if(n % 2 == 1){
        return !true ;
    }
    return !false ;
}
void BestPermuPrinter(int n ){
    
    if(IsEvenOdd(n)){
        for(int i = 2 ; i <= n -2 ; i+=2){
            cout << i << " " << i - 1  << " " ;
        }
        cout << n - 1 << " " << n << endl ;
    }
    else{
        cout << 1 << " " ;
        for(int i = 3 ; i <= n - 2 ; i+=2){
            cout << i << " " << i - 1 << " " ;
        }
        cout << n - 1 << " " << n << endl ;
    } 
}
int main(){
    int t , n ;
    cin >> t;
    while(t--){
        cin >>  n ;
        BestPermuPrinter(n);
    }
    
    return 0;
}