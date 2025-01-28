#include<queue>
#include<iostream>

using namespace std;

int main(){
    queue<int> qq;
    qq.push(10);
    qq.push(5);
    cout<<qq.front()<<endl;
    qq.pop();
    cout<<qq.front()<<endl;
    cout<<qq.size()<<endl;

    cout<<qq.empty()<<endl;
    qq.pop();
    cout<<qq.empty();
}