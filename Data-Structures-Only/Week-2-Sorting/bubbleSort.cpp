#include<iostream>
#include<vector>
using namespace std;
int main(){
    int myList[] = {3, 2, 5, 6, 1};

    // Sorting Code
    for(int i=0; i<5;i++){
        for(int j=0; j<5-1-i; j++){
            if(myList[j+1] < myList[j]){
                swap(myList[j+1], myList[j]);
            }
        }
    }
    for(int i=0; i<5; i++)
        cout<<myList[i]<<" ";

    
}

