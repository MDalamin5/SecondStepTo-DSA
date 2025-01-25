#include<iostream>
using namespace std;

class Queue {
public:
    int r, l;
    int a[10];
    int sz;
    Queue(){
        r = -1;
        l = 0;
        sz = 0;
    }

    void enqueue(int data){
        if(sz > 9){
            cout<<"Your Queue is full"<<endl;
            return;
        }
        r++;
        if(r==10){
            r = 0;
        }
        a[r] = data;
        sz++;
    }
    int front(){
        if(sz==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return a[l];
    }

    void deque(){
        if(sz == 0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        l++;
        if(l == 10){
            l = 0;
        }
        sz--;
    }
    int qSize(){
        if(sz==0)
            return 0;
        else
        return sz;
    }
};


int main(){
    Queue qq;
    qq.enqueue(10);
    qq.enqueue(20);
    qq.enqueue(30);
    qq.enqueue(40);
    qq.enqueue(50);
    qq.enqueue(10);
    qq.enqueue(20);
    qq.enqueue(30);
    qq.enqueue(40);
    qq.enqueue(50);
    qq.deque();
    qq.deque();
    qq.enqueue(44);
    cout<<qq.qSize()<<endl;
    qq.enqueue(22);
    for(int i=0; i<10; i++){
        cout<<qq.front()<<" ";
        qq.deque();
    }

}