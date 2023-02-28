#include<iostream>

using namespace std;

class base{
    public:
    base(){
        cout<<"constructor of base class callled!!!\n";
    }
    virtual ~base(){
        cout<<"destructor of base class callled!!!\n";
        
    };
};
class derived:public base{
    public:
    derived(){
        cout<<"constructor of derived class callled!!!\n";
        
    }
    ~derived(){
        cout<<"destructor of derived class callled!!!\n";

    };

};

int main()
{
    base *p =new derived();
    delete p;
    return 0;
};