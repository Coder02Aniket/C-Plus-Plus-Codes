#include<iostream>


using namespace std;


int main(){
    int a[] = {1, 2, 3, 4};
    int *b = &a[1];
    
    *(b++) = 100 ;
    // incremented
    
    *b = 110 ;

    for(int i : a){
        cout << i <<" " ;
    }
    
    return 0;
}