#include<iostream>
#include<vector>
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
        swap(node[idx], node[node.size() - 1]);
        node.pop_back();
        downHeapiFi(idx);
    }

    void downHeapiFi(int idx){
        while(idx < node.size()){
            if(node[(2*idx) + 1] > node[idx]){
                swap(node[idx], node[(2*idx) + 1]);
                idx = (2*idx) + 1;
            }
            else{
                swap(node[idx], node[(2*idx) + 2]);
                idx = (2*idx) + 2;
            }
            cout<<"i'm hare"<<endl;
        }
        
    }
};

int main(){
    Heap hp;
    hp.insert(1);
    hp.insert(10);
    hp.insert(5);
    hp.insert(4);
    hp.insert(11);
    hp.insert(9);

    hp.displayHeap();
    hp.DeleteElement(2);
    hp.displayHeap();

}