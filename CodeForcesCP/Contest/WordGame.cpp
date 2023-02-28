#include<iostream>
#include<vector>
#include<string>
#include<map>

using namespace std;


/*****COPIED FROM SOMEONE****
 * seen solution and then coded
*/
int main(){
    int t ;
    cin >> t;

    while(t--){
        map<string,int>mp ;
        vector<vector<string>> vs(3);
        int no_of_words = 0 , k = 0 ; 
        cin >> no_of_words ;
        for(int i = 0 ;i < 3 ; i++){
            k = no_of_words ;
            while(k--){
                string a ;
                cin >> a ;
                vs[i].push_back(a) ;
                mp[a]++;
            }
        }
        vector<int>Total_Players(3);
        for(int i = 0 ; i < 3 ;i++){
            Total_Players[i] = 0 ;
            for(string m : vs[i]){
                if(mp[m] == 1){
                    Total_Players[i] += 3 ;
                }
                if(mp[m] == 2){
                    Total_Players[i]+= 1 ;
                }

            }
        }
        for(int i : Total_Players){
            cout << i << " " ;
        }
        cout << endl ;
        mp.clear() ;
        vs.clear() ;


    }
    
    return 0;
}