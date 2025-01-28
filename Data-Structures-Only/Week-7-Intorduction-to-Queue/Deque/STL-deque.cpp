#include<deque>
#include<iostream>

using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);

    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    dq.push_front(1);
    
}