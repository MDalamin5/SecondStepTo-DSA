#include<iostream>
#include<queue>

using namespace std;



int main(){
  priority_queue<int> pq;
    pq.push(1);
    pq.push(4);
    pq.push(5);
    pq.push(40);
    pq.push(9);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
  
}