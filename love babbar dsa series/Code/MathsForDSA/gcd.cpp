#include<bits/stdc++.h>


using namespace std;

int gcd(int a , int b){
    if(!a || !b){
        if(a){
            return a ;
        }
        return b ;
    }
    return gcd(b,abs(a-b));
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    cout << gcd(10,0) << endl ;

    int a = 35, b = 10;
	cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b)
		<< endl;
	a = 31, b = 2;
	cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b)
		<< endl;


    return 0;
}