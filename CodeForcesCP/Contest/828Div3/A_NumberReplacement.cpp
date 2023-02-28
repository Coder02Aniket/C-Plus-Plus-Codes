#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>



using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t , n , temp , flag ;
    string word ,result="";
    cin >> t ;
    while(t--){
        string word ,result="";
        cin >> n ;
        flag = 0 ;
        
        // vector<int>nums_count(51,0),char_count(27,0);
        // vector<int>::iterator itr ; 
        // cin >> n;
        
        // for(int i = 0 ; i < n ;i++){
        //     cin >> temp ;
        //     nums_count[temp]++;
        // }
        // cin >> word ;
        // for(char i : word){
        //     char_count[int(i-97)]++;

        // }
        // for(int i : nums_count){
        //     if(i!=0){

        //         itr = find(char_count.begin() , char_count.end() , i) ;
        //         if(itr == char_count.end()){
        //             flag = 1 ;
        //         }
        //     }
        // }
        // if(flag==1){
        //     cout << "NO" << endl ;
        // }
        // else{
        //     cout << "YES" << endl ;
        // }
        vector<int>nums;
        for(int i = 0 ; i < n ; i++){
            cin >> temp ;
            nums.push_back(temp);

        }
        cin >> word ;
        unordered_map<int,char>uo_multiM ;
        for(int i = 0 ; i < n ; i++){
            if(uo_multiM.find(nums[i])==uo_multiM.end())
                uo_multiM.insert(make_pair(nums[i],word[i]));
            
        }


        for(int i : nums){
            
            result.push_back(uo_multiM[i]);
        }
        if(result==word ){
            cout << "YES" << endl ;
        }
        else {
            cout << "NO" << endl ;
        }

        uo_multiM.clear() ;
        nums.clear() ;


        

    }
    return 0;
}