#include<iostream>
#include<stack> 

using namespace std;


int main(){
    stack<int> st;



    st.push(2) ;
    st.push(4) ;
    st.push(3);
    st.push(3);
    st.push(1);

    // cout << st.top() ;
    // st.pop();
    // cout << st.top() ;
    // st.pop() ;
    // cout << st.top() ;

    while(!st.empty()){
        st.pop() ;

    }
    // cout << st.size() << endl; 
    st.push(2) ;
    st.push(4) ;
    st.push(3);
    st.push(3);
    st.push(1);
    // stack < int > st;
    cout <<"------"<<endl;
    while(!st.empty()){
        cout<<"|"<< st.top() <<"     |"<< endl;
        st.pop() ;
    }
    cout<<"-------"<<endl;


    return 0;
} 