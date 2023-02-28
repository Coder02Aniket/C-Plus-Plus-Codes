#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<bitset>



using namespace std;

vector<int> countBits(int n) {
        bitset<32> b ;
        vector<int> q ;
        int m = 0 ;
        for(int i = 0 ; i <= n ; i++){
            b = i ;
            m = b.count() ;
            q.push_back(m) ;
            
        }
        return q;
    }
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    
    return 0;
}