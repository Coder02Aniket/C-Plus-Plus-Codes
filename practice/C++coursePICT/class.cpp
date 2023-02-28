#include<iostream>
using namespace std;

class A 
{
    public:
        int x;
    private:
        int y;
    public:
        void init_xy(int p , int q)
        {
                x=p;
                y=q;

        };
        int add()
        {
            return (x+y);
        };
    
    
};
int add1(int x,int y)
{
    return (x+y);
}
int main()
{
    A a;
    a.init_xy(5,6);
    cout<<"\nsum="<<a.add();
    // cout<<"\nsum="<<add1(a.x,a.x);
    cout<<"\nsum="<<add1(2,3);
    cout<<"\nsum="<<add1(a.x,a.y);
    