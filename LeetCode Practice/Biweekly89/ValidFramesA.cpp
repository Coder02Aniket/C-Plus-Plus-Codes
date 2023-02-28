#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>



using namespace std;
class Solution {
public:
    int countTime(string s) {
            int hr_choices  = 1 , min_choices = 1 , total_choices = 1; 
    string hours = s.substr(0,2) , mins = s.substr(3,2);
    // cout << hours << " " << mins  << endl ;
    for(int i = 0 ; i < 2 ; i++){
        if(hours[i]=='?'){
            if(hours[0]=='?' and hours[1] == '?'){
                hr_choices = 24 ;
            }
            else if(i == 1 && hours[0] < toascii('2')){
                hr_choices = 10 ;
            }
            else if(i == 1 && hours[0]>toascii('1') ){
                hr_choices = 4 ;
            }
            else if (hours[1] < toascii('4') && i == 0){
                hr_choices = 3;
            }
            else{
                hr_choices = 2 ;
            }

        }
        if(mins[i]=='?'){
            if(mins[0] == '?' and mins[1] == '?'){
                min_choices = 60 ;
            }
            else if( i == 1){
                min_choices = 10 ; 
            }
            
            else{
                min_choices = 6;
            }
        }
    }
    // cout<< hr_choices << " " << min_choices ;
    total_choices = hr_choices * min_choices ;
    return total_choices ;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Solution* ob ;
    string t ;
    cin >> t; 
    cout << ob->countTime(t) << endl ;
    
    return 0;
}