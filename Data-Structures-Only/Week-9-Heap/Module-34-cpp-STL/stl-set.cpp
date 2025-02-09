#include<set>
#include<iostream>
#include<vector>
#include<list>

using namespace std;
int main(){
    set<int> mySet;
    mySet.insert(5); // O(logn)
    mySet.insert(6);
    mySet.insert(2);
    mySet.insert(3);
    mySet.insert(51);

    // Set Printing
    for(auto i: mySet)
        cout<<i<<" ";
    cout<<endl;

    cout<<"Size of my Set is: "<<mySet.size()<<endl;

    // Set printing different way
    for(auto it=mySet.begin(); it != mySet.end(); it++)
        cout<<*it<<" ";

    
    cout<<endl;
    mySet.erase(2);

    // Set Printing after erasing
    for(auto i: mySet)
        cout<<i<<" ";
    cout<<endl;

    // findint
    if(mySet.find(6) != mySet.end())
        cout<<"6 found"<<endl;
    else
        cout<<"6 not found"<<endl;
}