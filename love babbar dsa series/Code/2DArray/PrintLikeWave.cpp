#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>



using namespace std;

/*void PrintLikeWave(vector<vector<int>>nums){
    int col_size = 0 ; 
    for(int i = 0 ; i < nums.size() ; i++){
        if(i % 2 ){
            col_size = nums[i].size() ;
            while(col_size-->0){
                
                cout << nums[i][col_size] << " " ;
            }
        }
        else{
            col_size = 0 ;
            while(col_size < nums[i].size()){
                cout << nums[i][col_size++] << " " ;

            }
        }
    }
}*/
/* ------>
   <------
   ------->
   <-------
*/
/* We want 
 veritcal ones */
vector<int> PrintLikeWave(vector<vector<int>>nums, int rows ,int cols){
    vector<int>result ;
    for(int i = 0 ; i < cols ; i++){
        if(i & 1){
            for(int j = rows - 1 ; j >= 0 ; j--){
                result.push_back(nums[j][i]) ;
            }
        }
        else{
            for(int k = 0 ; k < rows ; k++){
                result.push_back(nums[k][i]) ;
            }
        }
    }
    return result ;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<vector<int>> tc = {{1,2,3,4},{5,6,7,8},{9,10,11,12}} ;
    vector<int> tc1 =PrintLikeWave(tc,3,4) ;
    for(auto i : tc1){
        cout << i << " " ;

    }
    return 0;
}