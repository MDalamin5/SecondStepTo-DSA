#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Heap {
public:
    vector<int> node;
    Heap(){

    }
    void up_heapify(int idx){
        while(idx > 0 && node[idx] > node[(idx - 1)/2]){
            swap(node[idx], node[(idx - 1)/2]);
            idx = (idx - 1) / 2;
        }
    }

    void insert(int data){
        node.push_back(data);
        up_heapify(node.size() - 1);
    }

    void displayHeap(){
        for(int i=0; i<node.size(); i++){
            cout<<node[i]<<" ";
        }
        cout<<endl;
    }

    void DeleteElement(int idx){
        if(idx > node.size())
            return;
            
        swap(node[idx], node[node.size() - 1]);
        node.pop_back();
        downHeapiFi(idx);
    }

    void downHeapiFi(int idx){
        
            while(1){
                int largest = idx;
                int l = (2*idx) + 1;
                int r = (2*idx) + 2;

                if(l < node.size() && node[l] > node[largest]){
                    largest = l;
                }
                if(r < node.size() && node[r] > node[largest]){
                    largest = r;
                }
                if(largest == idx){
                    break;
                }
                swap(node[idx], node[largest]);
                idx = largest;
            }
        
        
    }

    int getMax(){
        if(!node.empty()){
            return node[0];
        }
        else{
            cout<<"Heap is empty"<<endl;
            return -1;
        }
    }

    int extractMax(){
        int max = node[0];
        DeleteElement(0);
        return max;
    }

    void buildHeapFromArray(vector<int> &a){
        node = a;
        for(int i = (node.size() - 1)/2; i>=0; i--){
            downHeapiFi(i);
        }
    }
};

class Priority_Queue {
public:
    Priority_Queue(){

    }

    Heap maxHeap;
    void push(int value){
        maxHeap.insert(value);
    }
    void pop(){
        maxHeap.extractMax();
    }
    int top(){
        return maxHeap.getMax();
    }
    int getSize(){
        return maxHeap.node.size();
    }

};

int main(){
    Priority_Queue pq;
    pq.push(1);
    pq.push(4);
    pq.push(5);
    pq.push(40);
    pq.push(9);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
  
}