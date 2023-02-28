#include<iostream>
#include<vector>


using namespace std;

bool checkInclusion(string s1, string s2) {
    vector<int>s1_map(26,0),map_in_window(26,0);
    int str_check_len = s1.length() ;
    for(int i = 0 ; i < str_check_len ;i++){
        s1_map[s1[i]-'a']++;
        
    }

    int window_start = 0 , window_end = str_check_len-1 , i = 0 ;
    while(window_end < s2.length())
    {
        i = window_start ;
        while(i <= window_end){
            map_in_window[s2[i]-'a']++;
            
            i++;
        }
        if(map_in_window == s1_map){
            return true ;
        }
        for(int i = 0 ; i < 26 ; i++){
            if(map_in_window[i]> 0){
                map_in_window[i] = 0 ; 
            }
        }



        window_start += 1;
        window_end += 1;
        
    }

    return false ;
} 
int main(){
    cout << checkInclusion("cda","dcda");
    
    return 0;
}