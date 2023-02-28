#include<iostream>
#include<math.h>

using namespace std;


int main(){
    int n ;
    int i = 0;//for multiplying with 10's power
    cin >> n ;
    int ans = 0;
    if (n < 0){
        n = -1 * n ;

    }

    while(n != 0)  {
        
        int bit = (n & 1) ;
        ans = (bit * pow(10,i) )+ ans ;

        n =( n >> 1 );
        i ++;
    }
    cout << "Answer is :"<<(~ans + 1 ) << endl;
    
    return 0;
}