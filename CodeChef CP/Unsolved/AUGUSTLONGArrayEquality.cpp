#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool chefDislike(vector<int>& tc){
    
    for(int i = 0 ; i < tc.size() -1 ; i++){
        if(tc[i] == tc[i+1]){
            return true ;
        }
    }
    return false ;
}
int main() {
    int t ;
    cin >> t ;
    while(t--){
        
        int size = 0 ;
        cin >> size ;
        vector<int>tc(size,0) ;
        for(int i = 0 ; i < size ; i++){
            int arr_ele ;
            cin >> arr_ele ;
            tc[i] = arr_ele ;
        }
 
        if(chefDislike(tc) == false){
            cout << "YES";
        }
        else if(chefDislike(tc) == true ){
            unordered_map<int,int> ap;
            for(int i = 0 ; i< size ; i++){
                ap[tc[i]]++;
            }
            int max_freq = 0 ;
            for(pair<int,int> i : ap)
            {
                max_freq = max(i.second , max_freq) ;
            }

            if(2 *  max_freq > size + 1){
                cout<<"NO";
            }
            else{
                cout << "YES" ;
            }
            ap.clear() ;
        }
        cout << endl;
        tc.clear();
    }
	return 0;
}
