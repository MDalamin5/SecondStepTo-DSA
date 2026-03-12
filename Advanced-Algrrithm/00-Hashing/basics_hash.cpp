#include<bits/stdc++.h>
using namespace std;

class Hashing {
    vector<list<int>> hashtable;
    int buckets;

public:
    Hashing(int size){
        buckets = size;
        hashtable.resize(size);
    }

    int hashvalue(int key){
        return key%buckets;
    }

    void addKey(int key){
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }

    list<int>::iterator search(int key){
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(), hashtable[idx].end(), key);
    }

    void deleteKey(int key){
        int idx = hashvalue(key);
        if(search(key) != hashtable[idx].end()){
            hashtable[idx].erase(search(key));
            cout<<key<<" is deleted"<<endl;
        }
        else{
            cout<<"The key:"<<key<< " is not found in the hash table"<<endl;
        }
        
        
    }
};

int main(){
    Hashing h(10);

    h.addKey(5);
    h.addKey(9);
    h.addKey(3);

    h.deleteKey(9);
    h.deleteKey(9);
}