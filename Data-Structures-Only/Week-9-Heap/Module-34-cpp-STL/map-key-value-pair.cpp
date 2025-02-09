#include<map>
#include<iostream>

using namespace std;

int main(){
    map<string, int> person;

    person["AlAmin"] = 25;
    person["Niloy"] = 23;
    person["Aminnul"] = 22;

    cout<<person["AlAmin"]<<endl;

    // its work as python dictionary

    //printing
    for(auto it: person)
        cout<<it.first<<"-->"<<it.second<<endl;
}