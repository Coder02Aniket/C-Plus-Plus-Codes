#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int countMinSwap(vector<int>& nums){
    int n = nums.size();
    pair<int,int>ap[n] ;
    for(int i = 0 ; i < n ;i++){
        ap[i].first = nums[i] ;
        ap[i].second = i ;
    }
    sort(ap , ap+n) ;
    vector<bool> visited(n,false);
    int ans = 0 ;
    for(int i = 0 ; i < n ; i++){
        // if element is visited or element is visited 
        int old_position = ap[i].second;
        if(visited[i] == true or old_position == i){

            continue ;
        }
        // visiting the element (index) for first time 
    
        int node = i ;
        int cycle = 0  ;
        while(!visited[node]){
            visited[node] = true ; 
            int next_node = ap[node].second ;
            node = next_node ; 
            cycle++ ;
        }
        ans += (cycle - 1) ;
    }
    return ans ;
}
int main(){
    
    
    return 0;
}