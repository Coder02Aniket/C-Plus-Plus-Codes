#include <iostream>

using namespace std;

class Bankdeposit
{
    int principal;
    int years;
    float intrestrate;
    float returnvalue;

public:
    Bankdeposit();
    Bankdeposit(int p, int y, float r);
    Bankdeposit(int p, int y, int r);
    void show()
    {
        cout<<endl<<"Principal amount is :  "<<principal
            <<"return value after  "<<years<<"years"
            <<"is  " << returnvalue << endl;
    }
};

Bankdeposit::Bankdeposit(){
    cout<<"hi default constructor here!!!!";
}
Bankdeposit::Bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    intrestrate = float(r)/100;
    returnvalue = principal + intrestrate;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + intrestrate);
    }
}
Bankdeposit::Bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    intrestrate = r;
    returnvalue = principal + intrestrate;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + intrestrate);
    }

}
int main()
{
    Bankdeposit B1 , B2 , B3 , B4 ;
    int p , y ;
    float r;
    int R ;
    cout<<"enter 1 if rate of intrest is in float or enter 0 ";
    bool tofrateofint;
    cin >> tofrateofint ;
    if (tofrateofint == 1){

        cout<<"Enter the value of  p y and r ";
        cin>>p>>y>>r;
        B1 = Bankdeposit(p , y , r);
        B1.show();    
    }
    else if (tofrateofint == 0 ){

        cout<<"Enter the value of  p y and R(int) ";
        cin>>p>>y>>r;
        B2 = Bankdeposit(p , y , R);
        B2.show();     
    }
    
    




    return 0;
}