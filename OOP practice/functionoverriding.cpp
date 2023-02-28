#include<iostream>

using namespace std;

class animal{
    public:
    void function(){
        cout<<"eating....."<<endl;
    }

};
class man:public animal{
    public:
    void function(){
        cout<<"sleeping......"<<endl;
    }
};
int main()
{
    animal Aniket= animal();
    Aniket.function();//parent class object
    man Aniket1;
    Aniket1.function();//child class object
    return 0;
}
// superclasss==base class == derived class

    
    
    