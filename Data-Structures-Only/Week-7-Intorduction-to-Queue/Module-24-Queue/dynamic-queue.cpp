#include<iostream>
using namespace std;

class Queue {
public:
    int r, l;
    int *a;
    int array_cap;
    int sz;
    Queue(){
        r = -1;
        l = 0;
        sz = 0;
        a = new int[1];
        array_cap = 1;
    }

    void removeCircular(){
        if(l>r){
            int *temp = new int[array_cap];
            int idx = 0;
            for(int i=l; i<sz; i++){
                temp[idx++] = a[i];
            }
            for(int i=0; i<=r; i++){
                temp[idx++] = a[i];
            }
            swap(temp, a);
            l = 0;
            r = array_cap - 1;
            delete []temp;
        }
    }
    void increaseSize(){
        removeCircular();
        int *temp = new int[array_cap * 2];
        for(int i=0; i<array_cap; i++)
            temp[i] = a[i];
        
        swap(temp, a);
        array_cap = array_cap*2;
        delete []temp;

    }

    void enqueue(int data){
        if(sz == array_cap){
           increaseSize();
        }
        r++;
        if(r==array_cap){
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
        if(l == array_cap){
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