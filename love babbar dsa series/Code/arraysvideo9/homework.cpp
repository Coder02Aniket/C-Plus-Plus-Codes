#include<iostream>


using namespace std;


int main(){
    int x ;
    int array[10] ={1};
    int i , sum = 0;
    for ( i = 0 ; i < 10 ; i ++){
        sum = sum + array[i] ;
    }
    
    for(i = 0 ; i < 10 ; i ++){     
        int i = 0 ;
        cout<<array[i]<<" " ;
    }
    cout<<sum ;
    

    

    return 0;
}