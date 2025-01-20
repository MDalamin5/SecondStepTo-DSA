#include<list>
#include<iostream>
using namespace std;

void print(list<int>l){
    // list<int>::iterator a = l.begin();
    auto a = l.begin();

    while(a != l.end()){
        cout<< *a <<" ";
        a++;
    }
    cout<<endl;

}

void Insert(list<int>&l, int position, int value){
    auto it = l.begin();
    advance(it, position);
    l.insert(it, value);

}

void Delete(list<int>&l, int pos){
    auto it = l.begin();
    advance(it, pos);
    l.erase(it);
}

int main(){
    list<int> ll;
    ll.push_back(22);
    ll.push_back(20);
    ll.push_back(25);
    ll.push_back(26);
    print(ll);
    
    Insert(ll, 3, 33);
    print(ll);

    Delete(ll, 2);
    print(ll);

    cout<<ll.size()<<endl;
}