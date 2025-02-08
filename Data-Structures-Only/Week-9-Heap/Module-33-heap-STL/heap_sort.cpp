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

vector<int> sorted(vector<int> a){
    Heap maxHeap;
    maxHeap.buildHeapFromArray(a);
    vector<int> sortedArray;
    for(int i=0; i<a.size(); i++){
        sortedArray.push_back(maxHeap.extractMax());
    }
    reverse(sortedArray.begin(), sortedArray.end());
    return sortedArray;
}

int main(){
    Heap hp;
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>a(n);

    cout<<"Enter your array elements: ";
    for(int i=0; i<n; i++)
        cin>>a[i];

    vector<int>result = sorted(a);
    cout<<"After sorting!!"<<endl;
    for(int i=0; i<n; i++)
        cout<<result[i]<<" ";
    
    
    
    

}