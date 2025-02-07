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