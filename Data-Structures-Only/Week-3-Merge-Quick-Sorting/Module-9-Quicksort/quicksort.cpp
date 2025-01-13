#include<iostream>
#include<vector>
using namespace std;
vector<int> quickSort(vector<int>&a){
    if(a.size() <= 1)
        return a;
    
    int pivot = a[a.size() - 1];
    // int pivot = rand() % (a.size()); // choose pivot as randomly
    vector<int> b, c;
    
    // 
    for(int i=0; i<a.size(); i++){
        if(a[i] == pivot)
            continue;
        if(a[i] <= pivot)
            b.push_back(a[i]);
        else
            c.push_back(a[i]);
    }

    vector<int>sorted_b = quickSort(b);
    vector<int>sorted_c = quickSort(c);
    
    vector<int>sorted_a;
    for(int i=0; i<sorted_b.size(); i++)
        sorted_a.push_back(sorted_b[i]);
    
    sorted_a.push_back(pivot);

    for(int i=0; i<sorted_c.size(); i++)
        sorted_a.push_back(sorted_c[i]);
    
    return sorted_a;

}

int main(){
    vector<int>number = {2, 5, 7, 9, 3, 1};
    vector<int>res = quickSort(number);

    for(int i=0; i<res.size(); i++)
        cout<<res[i]<<" ";
}