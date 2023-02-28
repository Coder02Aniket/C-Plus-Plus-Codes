#include<bits/stdc++.h>


using namespace std;

void ParametrizedFactorial(int n){
    if(n == 0){
        
        return ; 
    }
    else{
        
    }
}
double functionalFactorial(int n ){
    if(n==0){
        return 1 ;
    }else{
        return n * functionalFactorial(n-1);
    }
}
int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);


    int n , choice = 0;
    cout << "<<<<<<<<<enter number to calculate factorial for >>>>>"<< endl ;
    cin >> n ;

    cout << functionalFactorial(n) << endl; 



    return 0;
}