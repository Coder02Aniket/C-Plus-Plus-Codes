#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<bitset>


using namespace std;

int countSetBits(int num){
    int shift = 0 , bit , count = 0; 
    for(; shift < 32 ; shift++){
        bit = num & (1 << shift) ;
        if(bit){
            count++;
        }
    }
    return count ;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t , num ;
    cin >> t  ;
    while(t--){
        cin >> num ;
        cout<< countSetBits(num) << endl ;

    }
    
    return 0;
}