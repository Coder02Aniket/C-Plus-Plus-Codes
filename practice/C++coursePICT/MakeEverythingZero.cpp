#include<bits/stdc++.h>



using namespace std;

int MakeEverythingZero(int a, int b , int c ){
    int sum = a + b + c ;
    if(sum < 2){
        return -1 ;
    }
    int count = 0 ;
    while(sum % 3 != 0  && sum > 0){
        sum -= 2 ;
        count++;
    }
    count += sum / 3 ;
    return count ; 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a , b, c, t ;
    cin >> a >> b >> c ;
    cout << MakeEverythingZero(a,b,c) << endl ;
    
    return 0;
}