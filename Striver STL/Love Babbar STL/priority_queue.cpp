#include<iostream>

#include<queue>
using namespace std;


int main(){
    // MAX HEAP
    priority_queue<int> Max_Heap ;

    // MIn HEAP
    priority_queue<int,vector<int>,greater<int>>Min_Heap ;

    Max_Heap.push(1) ;
    Max_Heap.push(2) ;
    Max_Heap.push(3) ;
    Max_Heap.push(4) ;
    cout <<"\nSIze-->" <<Max_Heap.size() <<endl;

    int n = Max_Heap.size() ;
    for(int i = 0 ; i < n ; i++ ) {
        cout << Max_Heap.top() <<" " ;
        Max_Heap.pop() ;

    }cout << endl;

    Min_Heap.push(5);
    Min_Heap.push(3);
    Min_Heap.push(2);
    Min_Heap.push(1);

    int m = Min_Heap.size() ;
    for(int i = 0 ; i < m ; i++ ){
        cout << Min_Heap.top() <<" " ;
        Min_Heap.pop() ;
    }cout << endl;
    return 0;
}