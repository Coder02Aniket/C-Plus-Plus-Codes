#include<iostream>


using namespace std;
class sample 
{
    public:
    sample(){
        cout<<"hi";
    }
    ~sample(){
        cout<<"bye";
    }
};

int main(){
    sample *obj = new sample();

    delete (obj);
    return 0;
}