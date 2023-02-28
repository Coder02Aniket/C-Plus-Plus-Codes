#include<iostream>

using namespace std;
class Add{
    public:
    virtual void print(){
        int a = 20,b = 30;
        cout<<"base class action is "<<a+b<<endl;

    }
    virtual void show(){
        cout<<"show base class"<<endl;
    }
};
class Sub:public Add{
    public:
    void print(){
        int x = 78,y = 87;
        cout<<"derived classs action is:"<<y-x<<endl;
    }
    void show(){
        cout<<"show derived class"<<endl;
    };


};

int main()
{
    Add *ptr;
    Sub s;
    ptr = &s;
    ptr->print();
    ptr->show();

    
    
    
    return 0;
}


