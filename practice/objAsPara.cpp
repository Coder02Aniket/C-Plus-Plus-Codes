#include<iostream>


using namespace std;

class ObjAsPara{
public:
    int m  ;
    void ent_Value(int n){
        m = n;
    }
    void ObjATPara(ObjAsPara &o){
        // cin >> m ;
        cout <<"Value of m is :" << o.m <<endl;
        
    }
} ;
int main(){
    ObjAsPara Obj1 , Obj2 ;
    Obj1.ent_Value(40) ;
    Obj2.ObjATPara(Obj1) ;
    
    return 0;
}