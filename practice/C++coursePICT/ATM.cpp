#include<iostream>

using namespace std;
class ATM{
public:
    int balance= 1000;
    int get_balance();
    
};
int ent_pin;
int n_pin=1234;


class deposit:public ATM{ 
public:
    int a;   
    void deposit_amt();
    
   
};
class withdraw:public ATM{
public:
    int b;
    void withdraw_amt();

};
class pin:public ATM{
public:
    void new_pin();
    void authenciation();
};
void pin:: authenciation(){
   cout<<endl<<"enter pin for your account:\t";
   cin>>ent_pin;
    
};
void pin::new_pin(){
    cout<<"enter new pin\n";
    cin>>n_pin;
    cout<<"pin changed sucessfully new pin is :"<<n_pin<<endl;
};
void deposit::deposit_amt(){
    cout<<"enter amount to deposit\n";
    cin>>a;
    balance = a + balance;
    cout<<"deposit sucessful updated balance is :"<<balance<<"\n thank you for banking with us!!"<<endl;
};
void withdraw::withdraw_amt(){
    cout<<"enter amount to withdraw\n";
    cin>>b;
    balance = balance - b;
    cout<<"withdrawal sucessful updated balance is :"<<balance<<"\n thank you for banking with us!!";
};
int ATM::get_balance(){
    return balance;
}



int main()
{
    pin p;
    p.authenciation();
    if(ent_pin == n_pin){
        int choice;
        do{ 
            cout<<"1.deposit\n";
            cout<<"2.withdrawal\n";
            cout<<"3.change pin\n";
            cout<<"4.balance\n";
            cout<<"5.exit\n";
            cout<<"enter choice:\t";
            cin>>choice;
             ATM bal;
             deposit d;
             withdraw w;

            switch (choice)
            {
            case 1:
               d.deposit_amt();
               break;
             case 2:
               w.withdraw_amt();
               break;
             case 3:
               p.new_pin();
               break;
             case 4:
               bal.get_balance();
               cout<<bal.balance;
               break;
            case 5 :
                cout<<"sucessfully exited the code";
                break;
            default:
             cout<<"incorrect choice!! please enter correct choice";
             break;
            }
            
        }while(choice != 5);
    }
    else {
        cout<<"enter correct choice!";
        main();
    }
     
    return 0;
 }


    