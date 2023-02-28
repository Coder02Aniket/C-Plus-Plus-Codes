#include<iostream>
#include<math.h>
using namespace std;


int main() {

    long long int n;
    cin >> n;
    long long int ans  = 0;
    long long int i = 0;
    while(n != 0 ) {

        int bit  = n & 1;

        ans = (bit * pow(10, i) ) + ans;

        n = n >> 1;
        i++;

    }

    cout<<" Answer is " << ans<< endl;
    return 0;
}