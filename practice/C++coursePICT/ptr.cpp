#include<iostream>

using namespace std;

int main()
{
    int a[3]={1,2,3};
    int *p;
    p = a;
    for (int i = 0;i<3;i++,p++)
    {
        cout<<*p<<"\t"<<p<<endl;
    }
}