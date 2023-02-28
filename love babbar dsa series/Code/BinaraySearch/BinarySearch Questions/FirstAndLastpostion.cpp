#include<iostream>
#include<vector>

using namespace std;

pair<int,int> firstandlastpostion (vector<int> arr , int n  , int k){
    pair <int , int > result ; 
    result = make_pair(-1,-1) ;//another type of initialization
    for(int i = 0 ; i <  n ; i++){
        if (arr[i] == k){
            result.first = i ; 
            break ;
        }

    }
    for(int j = n-1; j > -1 ; j-- ){
        if(arr[j]== k){
            result.second = j ;
            break ;
        }
    }
    return result ; 
}

int main(){
    vector < int > i = {1,2,3,4,4,4,5} ;
    int size = i.size() ;
    int k = 4;
    pair<int,int> result = firstandlastpostion(i ,size , k ) ;
    cout << "(" << result.first << "  " << result.second << ")" << endl ;  
    return 0;
} 