#include<iostream>


using namespace std;

int GoodEle(int a , int b , int c ){
    int first_ele_time = abs((a - 1)) ;
    int sec_ele_time = abs((c - b)) + abs((c - 1));
    if(first_ele_time < sec_ele_time){
        return 1 ;
    }
    else{
        if(first_ele_time == sec_ele_time ){
            return 3 ;
        }
        return 2 ;
    }
}
int main(){
    int t , a,b,c ;
    cin >> t ;
    while(t--){
        cin >> a >> b >> c ;
        cout << GoodEle(a,b,c) << endl ;

    }
    
    return 0;
}