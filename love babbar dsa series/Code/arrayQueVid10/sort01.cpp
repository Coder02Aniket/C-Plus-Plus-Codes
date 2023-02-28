//Two Point Approach
#include<iostream>


using namespace std;

void sort(int arr[] , int size ){
    int left = 0 , right = size -1 ;
    while( left <= right){
        if (  arr[left] == 0 )
            left++ ;
        else if ( arr[right] == 1)
            right-- ;
        else if (arr[left] == 1 && arr[right] == 0){ 
            swap( arr[left] , arr[right] ) ;
            left++ , right-- ;
        }
    }
}
int main(){
    int ary[8] = {1,1,0,0,0,0,1,0} ;
    sort(ary , 8 ) ;
    cout<<"{" ;
    for (int i : ary){
        cout<< i <<" " ;
    }
    cout<<"}" ;

    
    return 0;
}