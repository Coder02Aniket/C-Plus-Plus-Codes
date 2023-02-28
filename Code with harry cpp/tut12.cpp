#include<iostream>

using namespace std;


int main()
{
   int a = 3;
   int* b = &a;
   // & ----> adress of operator
   // * -----> dereferencing operator

   cout<<"\nThe adress of a is "<<&a<<"\n";
   cout<<"\nThe adress of a is "<<b;

//    * ----> Derefernce operator(Value at operataor)
   cout<<"\n The value of address b is "<<*b<<endl;
   

   return 0;
}