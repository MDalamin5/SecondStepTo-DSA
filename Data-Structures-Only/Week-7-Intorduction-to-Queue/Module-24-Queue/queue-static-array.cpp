#include<iostream>
using namespace std;

class Queue {
public:
    int r, l;
    int a[10];
    Queue(){
        r = -1;
        l = 0;
    }

    void enqueue(int data){
        if((r-l+1)>=10){
            cout<<"Your Queue is full"<<endl;
            return;
        }
        else{
            r++;
            a[r] = data;
        }
    }
    int front(){
        if(l>r){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return a[l];
    }

    void deque(){
        if(l>r){
            cout<<"Queue is empty"<<endl;
            return;
        }
        l++;
    }
    int qSize(){
        if(l>r)
            return 0;
        else
        return r-l+1;
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
    qq.enqueue(44);
    qq.enqueue(44);
    cout<<qq.qSize()<<endl;
    // for(int i=0; i<6; i++){
    //     cout<<qq.front()<<" ";
    //     qq.deque();
    // }

}