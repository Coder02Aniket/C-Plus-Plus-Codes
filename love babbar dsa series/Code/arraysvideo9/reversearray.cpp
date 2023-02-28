#include<iostream>
#include<array>


using namespace std;
//no need to return array as it is not copied we will work on same array as passed 
void reverseArray(int a[],int m);

int main(){
    cout<<"Enter elements in array\t:" ;
    int a[2] ={0} ;
    int soa = sizeof(a)/sizeof(int);
    
    //input 
    for(int i =0 ; i < soa ; i++){
        cin >> a[i] ;
    }
    cout<<"Reversing....." ;
    reverseArray(a, soa) ;
    //output 
    int i = 0 ;
    for (i : a){
    //    cout << i << endl;
        cout << a[i] <<" ";
    }
    return 0;
}
void reverseArray(int a[],int soa){

    for (int i = 0, j= soa - 1; i<=j  ; i++,j--){
        swap(a[j], a[i]) ;
        // cout<<a[i] ;

    }
    
}