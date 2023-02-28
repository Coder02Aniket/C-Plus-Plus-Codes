#include<iostream>


using namespace std;
//destructors

auto count = 0;

class Destructorex{
    public:


    int aniket1 =  0 ;
    Destructorex(){
        count++;
        cout<<"This is  the time when constructor for the object no "<<count <<endl;

    }
    ~Destructorex(){
        cout<<"Inside Destructor\n"<<count;
        count--;


    }
    void aniket();
};
void Destructorex :: aniket(){
    aniket1 = 9 ;
}

int main(){
    Destructorex a,b,c,d;
    // cout<<sizeof(a);
    a.~Destructorex();
    b.~Destructorex();
    c.~Destructorex();
    d.~Destructorex();
    return 0;
}