#include<iostream>
#include<vector>



using namespace std;

int UnitsOfWater(vector<int>& ele_map ){
    int n = ele_map.size() , result = 0;
    if(n <= 2 ) {
        return 0 ;
    }
    vector<int> left(n,0) , right(n , 0 ) ;
    left[0] = ele_map[0] ;
    right[n-1] = ele_map[n-1] ;
    for(int i = 1 ; i < n;i++){
        left[i] = max(left[i-1] , ele_map[i]) ;
        right[n-i-1] = max(right[n-i],ele_map[n-i-1]) ;

    }
    for(int i = 0 ; i < ele_map.size() ; i++){
        result += min(left[i] , right[i]) - ele_map[i] ;
    }
    return result ;
}

int main(){
    vector<int>water = {4,2,0,3,2,5} ;
    cout << UnitsOfWater(water) <<" " ;
    
    return 0;
}