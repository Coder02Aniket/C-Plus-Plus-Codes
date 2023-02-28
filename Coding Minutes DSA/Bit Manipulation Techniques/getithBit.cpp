#include<iostream>


using namespace std;

int getIthBit(int num , int pos){
    int mask = 1 >> pos ;
    return (num & mask)>0 ? 1 : 0 ;
}
int main(){
    cout << getIthBit(10,2) << " " << (10 & 5) << endl ;
    
    return 0;
}