#include<iostream>

using namespace std;
class B{
    public:
    virtual void s()=0;//pure virtual function
};
class D:public B{
    public:
    void s(){
        cout<<"virtual function in derived class"<<endl;

    }

};
int main()
{
    B *b;
    D obj;
    b = &obj;
    b->s();

    
    return 0;
}