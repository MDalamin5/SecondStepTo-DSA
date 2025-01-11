#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    
    // Take input from User
    for(int i=0; i<n; i++)
        cin>>a[i];


    // Sorting Loop
    for(int i=1; i<n; i++){
        int idx=i;
        while (idx>=1)
        {
            if(a[idx] < a[idx-1]){
                swap(a[idx], a[idx-1]);
                idx--;
            }
            else
                break;
        }
        
    }

    // Output printing Loop
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

    
    return 0;
}