#include<iostream>
#include<queue>


using namespace std;


int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(4);
    q.push(6);

    while(!q.empty()){
        // cout<<q.back();
        cout << q.back() ;
        q.pop() ;
        cout<<q.front();
    }
    priority_queue<int> pq ;
    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(6);

    cout << pq.top() ;
    pq.pop() ;

    priority_queue<pair<int,int>> pqwp ;
    pqwp.emplace(1,5);
    pqwp.emplace(2,4);
    pqwp.emplace(3,2);
    pair<int,int> qp ;
    // Normally max priority queue is there
    cout << endl;

    int size = pqwp.size() ;
    for(int i = 0 ; i < size ; i++){
        qp = pqwp.top() ;
        cout << "(" << qp.first << ","<< qp.second << ")" << endl;
        pqwp.pop() ;
    }

    // MIN_PRIORITY_QUEUE
    priority_queue<int,vector<int> , greater<int>> pq ;
    
    return 0;
}