#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>



using namespace std;

int Min_operation(vector<int>& tc , int n , int c){
    unordered_map<int,int>umap;
    unordered_set<int>uset;
    int size = tc.size() , min_moves = 0 ;
    for(int i = 0 ; i < size  ; i++ ){
        umap[tc[i]]++;
        uset.insert(tc[i]) ;
    }
    for(int i : uset){
        if(umap[i] > c){
            min_moves+= c;
        }
        else{
            min_moves += umap[i] ;
        }

    }
    return min_moves ;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> tc ;
    int t , n , c , ele;
    cin >> t; 
    while(t--){
        cin >> n >> c ;
        for(int i = 0 ; i < n ; i++){
            cin >> ele ;
            tc.push_back(ele) ;
        }
        cout << Min_operation(tc,n,c) << endl ;
        tc.clear() ;

    }
    
    return 0;
}