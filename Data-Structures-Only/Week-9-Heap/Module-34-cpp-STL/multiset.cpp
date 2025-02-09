#include<set>
#include<iostream>

using namespace std;
int main(){
    multiset<int> mst;
    mst.insert(5);
    mst.insert(4);
    mst.insert(5);
    mst.insert(3);
    mst.insert(8);

    // Display multiset data

    for(auto i: mst)
        cout<<i<<" ";
    cout<<endl;

    mst.erase(5);

    for(auto i: mst)
        cout<<i<<" ";
    cout<<endl; 
    mst.insert(8);
    for(auto i: mst)
        cout<<i<<" ";
    cout<<endl;
    // Erasing multiple occurences elements
    mst.erase(mst.find(8));

    for(auto i: mst)
        cout<<i<<" ";
    cout<<endl;

    if(mst.find(8) != mst.end())
        cout<<"8 exists in the set"<<endl;
    else
        cout<<"8 Not exists"<<endl;
        
}