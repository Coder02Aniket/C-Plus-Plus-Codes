#include<iostream>


using namespace std;
//Base class
class Employee{
public:
    int id ;
    float salary;

    Employee(int inpid){
             id  = inpid;
            salary = 34.0 ;
    }
    Employee (){}

};
//derived class
// default visiblity mode is private
class Programmer : public Employee {
public:
    int languagecode = 9 ;
    Programmer(int inpid){
        id = inpid;
    }
    void getdata(){
        cout<<id;
    }

};



int main(){
    Employee harry(1),rohan(2);
    cout<<harry.salary<<"\n"<<rohan.salary;
    
    Programmer skillF(8);
    cout<<skillF.languagecode;
    skillF.getdata();
    
    return 0;

}