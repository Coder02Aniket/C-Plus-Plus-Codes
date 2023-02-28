#include<iostream>

using namespace std;

class A
{
    public: 
    virtual void test()=0;
};
class B:public A{
    public:
    void test(){
        int a = 2+3;
        cout<<"value of a is:\t"<<a<<endl;
    };

};

int main()
{
    B o;
    o.test();
    
    
    return 0;
}