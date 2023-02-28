#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>



using namespace std;

void ClearIthBit(int& n , int i ){
    int mask = ~(1 << i ) ;
    n = n & mask ;
    

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n = 21 ;
    ClearIthBit(n,2) ;
    cout << n << endl ;
    return 0;
}