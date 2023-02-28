#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>



using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int arr[3][4] ;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl ; 
    }
    return 0;
}