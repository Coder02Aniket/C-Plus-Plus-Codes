/*header files and operators*/

#include<iostream>
//there are two types of header files
// 1. system header files :it comes with compiler 
// 2.user defined header files :it is written by the programmer
// #include<this.h> this will produce error if this.h is not present in the current directory


using namespace std;
int main(){
     int a=4,b=5;
     cout<<"the value of a + b is "<<a+b<<endl;
     cout<<"the value  of a - b is "<<a -b <<endl;
     cout<<"the value of a * b is "<<a * b <<endl;
     cout<<"the value of a/b is "<<a/b<<endl;
     cout<<"the value of a % b is "<<a % b <<endl;
     cout<<"the value of a++ is "<<a++<<endl;
     cout<<"the value of ++a is "<<++a<<endl;
     cout<<"the value of --a is "<<--a<<endl;
     cout<<"the value is a-- is "<<a--<<endl;
     // Assignment operators-->used to assign values to variables 
     // int a=3, b=9;
     // char d ='d';
     
     // comparision operator
     cout<<"the value of a == b is "<< (a==b)<<endl;
     cout<<"the value of a != b is "<< (a!=b)<<endl;
     cout<<"the value of a > b is "<< (a>b)<<endl;
     cout<<"the value of a < b is "<< (a<b)<<endl;
     cout<<"the value of a >= b is "<< (a>=b)<<endl;
     cout<<"the value of a <= b is "<<(a<=b)<<endl;
     
     //logical operator
     cout<<"Following are the logical operators in c++"<<endl;
     cout<<"the value of this logical operator((a==b) && (a<b))is :"<<((a==b) && (a<b))<<endl;
     cout<<"the value of this logical operator((a==b) || (a<b))is :"<<((a==b) || (a<b))<<endl;
     cout<<"the value of this logical not  operator(!(a==b))is :"<<(!(a==b))<<endl;

     return 0;
     
     
}

