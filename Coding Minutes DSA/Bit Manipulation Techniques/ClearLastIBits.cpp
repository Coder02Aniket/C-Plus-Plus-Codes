#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>



using namespace std;

void ClearLastIbits(int& n , int i ){
    int mask = -1 << i ; 
    n  =  n & mask ;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a = 15 ;
    ClearLastIbits(a,2) ;
    cout << a << endl ;
    
    return 0;
}