#include<bits/stdc++.h>
using namespace std;

class Hashing {
    vector<list<int>> hashtable;
    int buckets;

    Hashing(int size){
        buckets = size;
        hashtable.resize(size);
    }

    int hashvalue(int key){
        return key%buckets;
    }

    void add(int key){
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
        }
        
        
    }
};

int main(){
    cout<<"why hashing..."<<endl;
}