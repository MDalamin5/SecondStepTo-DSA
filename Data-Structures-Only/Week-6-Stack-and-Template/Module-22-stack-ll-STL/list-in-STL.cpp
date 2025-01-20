#include<iostream>
#include <queue>
#include<list>
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
int main(){
    list<int> l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);

    print(l);

    // Push back its add a value last of the index
    l.push_back(44);
    l.push_back(55);
    l.push_back(66);
    print(l);

    // pop back
    l.pop_back();
    print(l);
    l.pop_front();
    print(l);

    
}