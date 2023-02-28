#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<bitset>


using namespace std;

int countSetBits(uint32_t n ){
    int count = 0  ;
    uint32_t bit ;
    for(int i = 0 ; i < 32 ; i++){
        bit = 1 ;
        if(n & 1)
            count++;
    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // bitset<32> i = -1 ;
    
    // cout << i.count() << endl;
    cout << countSetBits(-1) <<endl;
    
    return 0;
}