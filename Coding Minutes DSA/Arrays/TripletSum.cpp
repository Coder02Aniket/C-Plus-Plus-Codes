/* Given an array containing n integers and an number s denoting the target sum find an distinct integers that can add up to form target sum . The number in each triplet should be ordred in ascending order , and triplets should be ordered too return empty arrary if no such triplets exists */
#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>


using namespace std;

vector<vector<int>> TripletSum(vector<int>& arr , int target){
    
    sort(arr.begin() , arr.end()) ;
    vector<vector<int>> result ;
    for(int i = 0 ; i < arr.size()-2 ; i++){
        int j = i + 1 ;
        int k = arr.size() - 1 ;
        while(j < k){
            int current_sum = arr[i] + arr[j] + arr[k];

            if(current_sum == target){
                result.push_back({arr[i],arr[j],arr[k]});
                return result ;
            }
            else if(current_sum < target){
                j++ ;

            }
            else if(current_sum > target){
                k--;
            }
        }
    }
    return result ;

}
int main(){
    vector<int> tc = {1,4,45,6,10,8};
    vector<vector<int>> output = TripletSum(tc,13) ;
    for(vector<int> i : output){
        for(int v : i){
            cout << v <<" ";
        }
        cout << endl;
    }
    return 0;
}