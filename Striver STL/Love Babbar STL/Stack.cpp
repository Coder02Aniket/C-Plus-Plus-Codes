#include<iostream>

#include<stack>

using namespace std;


int main(){
    stack <string> s ;
    s.push("Aniket") ;
    s.push("shankar") ;
    s.push("Nangare") ;

    // Top element
    cout << " Top Element :" << s.top() ; 
    cout << endl ;
    s.pop () ;
    cout << " Top Element :" << s.top() ;
    cout << "\n" ;
    s.pop() ;
    cout << endl ;
    cout <<"size of stack : " << s.size() <<endl ;
    cout << "Empty or not  :" << s.empty() ;

    
    return 0;
}