#include<iostream>
#include<iomanip>//new header file

using namespace std;

int main(){
    int a = 34;
    cout<<" the values of a was :"<<a<<endl;
    a = 45;
    cout<<" the values of a is :"<<a<<endl;
    // Constants in C++
    const int b = 3;
    cout<<"the value of b was :"<<b<<endl;
    // b = 32;constant can't change
    cout<<"the value of b is "<<b<<endl;
    /*****manipualators in C++ *******/
    int x = 43 , y = 424, z = 1287;
    cout <<"the value of x is :"<<setw(4)<<x<<endl;
    cout <<"the value of y is :"<<setw(4)<<y<<endl;//setw is function from iomanip
    cout <<"the value of z is :"<<setw(4)<<z<<endl;

    // operator precedence
    int m= 3, n = 4 ;
    //  int o = (m*5) + n
     int o = ((((m*5)+ n)-45) +87);
     cout <<o;
    return 0;


}
