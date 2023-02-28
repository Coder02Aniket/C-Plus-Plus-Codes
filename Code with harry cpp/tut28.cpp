#include<iostream>


using namespace std;
class Y;
class X{
    int data;
    public:
        void setvalue(int value){
            data = value;

        }
    friend void add(X,Y);
    

};
class Y{
    int num;
    public:
        void setvalue(int value){
            num = value;

        }
    friend void add(X,Y);
    
};
void add(X o1,Y o2){
    cout<<"summing two datas of X and Y objects gives me:\t"<<o1.data + o2.num;
};
int main(){
    X a1;
    a1.setvalue(4);
    Y a2;
    a2.setvalue(43);
    add(a1,a2);
    return 0;
}