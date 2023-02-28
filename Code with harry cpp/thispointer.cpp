#include<iostream>


using namespace std;

class thispointer
{
private:
    /* data */
public:
    int m ;
    thispointer(){
        cout<<"Default constructor!!" ;
    }
    thispointer(int a = 40 ){
        m = a  ;
        cout<< "m becomes A "<< m ;

    }
    ~thispointer(){
        cout<<"Destructor called!!!";
    };
};


int main(){
    thispointer *a ;
    a = new thispointer(40) ;
    cout<<endl<<a ->m ;
    
    
    return 0;
}