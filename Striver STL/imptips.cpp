#include<bits/stdc++.h> 
using namespace std ;

struct node{
    string str ;
    int num ;
    double doub ;
    char x ;
    // Defining Constructor 
    node(string str_, int num_, double doub_, char x_) {
        str= str_;
        num = num_;
        doub = doub_ ;
        x  = x_ ;

    }
};
int main(){
    double val = 10.0 ;
    cout << val << endl;
    
    // wrong way of defining struct elements 
    // node raj;
    // raj.str = "Striver";
    // raj.doub = 9.09 ;
    // raj.num = 78 ;
    

    // correct way of defining 
    node *raj = new node("Striver ",79 , 91.0 ,' ');
}
