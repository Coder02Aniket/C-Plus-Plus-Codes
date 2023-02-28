/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
using namespace std;
class complex{
    private:
    int real,imag;
    public:
    complex(int r = 0,int i = 0){
        real = r ;
        imag  = i ;
    }
    friend ostream & operator<<(ostream &out,const complex &c);
    friend istream & operator>>(istream &in,complex &c);
    
};
ostream & operator<<(ostream &out,const complex &c){
    out<<c.real;
    out<<"+"<<c.imag<<"i";
    return out;
}
istream & operator>>(istream &in,complex &c){
    cout<<"enter real part:\t";
    in>>c.real;
    cout<<"enter _Imaginary part:\t";
    in>>c.imag;
    return cin;
}
int main(){
    complex c1;
    cin>>c1;
    cout<<"the complex object is ";
    cout<<c1;
}


