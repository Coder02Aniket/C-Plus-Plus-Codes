#include<bits/stdc++.h>


using namespace std;

void print(int i ,int j =  3){
    cout << i << endl ;

    print(i-j,0);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i = 1 ; 
    print(i,8);

   return 0 ;



}