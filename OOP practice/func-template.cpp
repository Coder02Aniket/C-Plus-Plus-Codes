#include<iostream>
#include<iomanip>
using namespace std;
template<class X>
void swap(X &x)
{
    int y;
    X  temp;
    temp = x;
    x=y;
    y=temp;
}
void fun(int m,int n,float a,float b)
{
    cout<<"before swap m and n\n"<<m<<"\t"<<n<<endl;
    swap(m,n);
    cout<<"after swap m and n\n"<<m<<"\t"<<n<<endl;
    cout<<"before swap a and b\n"<<a<<"\t"<<b<<endl;
    swap(a,b);
    cout<<"after swap a and b\n"<<a<<"\t"<<b<<endl;
    
  
}
int main(){
    fun(100,300,10.5,20.9);
    return 0;
}

