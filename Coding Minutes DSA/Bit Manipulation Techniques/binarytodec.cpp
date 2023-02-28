#include<bits/stdc++.h>
#include<math.h>


using namespace std;


int main(){
    int i  = 0 ;
    int ans = 0;
    bitset<5> n = 11;
    // cout<<"Enter binary number\t:" ;
    // cin >> n;
    // while(n != 0 ){
    //     int digit = n % 10;
    //     if (digit == 1){
    //         ans = ans + pow(2 ,i);
    //     }
    //     i++;
    //     n = n / 10;
    // }
    
    cout<<n.to_ullong()<<endl;
    
    return 0;
}