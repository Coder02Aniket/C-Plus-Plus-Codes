#include<iostream>


using namespace std;

class Number{
    int a = 0;
    public:
    Number(){
        
    }
    Number(int num){
        a = num;
    }
    // Number(Number &obj){
    //     cout<<"copy constructor called!!!!!";
    //     a = obj.a;
    // }
    void display(){
        cout<<"the number for this object is:\t"<<a<<endl;
    }
};

int main(){
    Number  x , y , z(43) , z2;
    x.display();
    y.display();
    z.display();

    Number z1(z);// passing object as a parameter
    z1.display();

    z2 = z;//copy constructor not called

    Number z3 = z ;// copy constructor invoked
    


    return 0;
}