#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
    int a =12;
    auto b = &a;
    cout << typeid(b).name() ;
    
    return 0;
};