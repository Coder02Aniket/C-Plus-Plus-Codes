#include<iostream>
#include<string.h>

using namespace std;

class authentication
{
    public:
    string username,password;

    void credentials();
};
void  authentication::credentials(){
    cout<<"enter username\n";
    cin>>username;
    cout<<"enter password\n";
    cin>>password;
    if (username=="usr" && password=="pass"){
        cout<<"correct";
    }
    else
    {
        cout<<"username or password is incorrect"<<endl;
    };

}
int main()
{
  authentication user1;
  user1.credentials();

   return 0;
}
