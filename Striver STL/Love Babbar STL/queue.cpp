#include<iostream>
#include<queue>

using namespace std;


int main(){
    queue<string> q;
    q.push("Bharambhe") ;
    q.push("shivam") ;
    q.push("Gajanan") ;

    cout << "Size before pop" <<q.size() <<endl ;

    cout <<"First Element :" <<q.front() << endl;
    q.pop() ;
    cout <<"Second Element :" << q.front() ;
    
    // Last Element 
    cout << "\nLast element : " << q.back() ;
    
    return 0;
}