#include<bits/stdc++.h>


using namespace std;
#define intt long long

int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    int t ; 
    cin >> t ;
    while(t--){
        intt n , count= 0 , no_of_pyramids= 0;
        cin >> n ;
        vector<intt>no_of_cards ={2};
        for(intt start = 5 ; no_of_cards[count]<= n ; start+=3){
            count = count + 1 ;
            no_of_cards.push_back(no_of_cards[count-1] + start );
        }
        no_of_cards.pop_back();
        count--;
        // for(intt i : no_of_cards){
        //     cout << i << " ";
        // }
        for(int i = count ; i >=0 && n != 1 ; ){

            if(n >= no_of_cards[i]){
                n = n - no_of_cards[i];
                no_of_pyramids++;
            }
            else{
                i--;
            }
            
        }
        
        
        cout << no_of_pyramids <<endl ;
    }
    




    return 0;
}