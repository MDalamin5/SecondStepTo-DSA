#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, k;
    cout<<"Enter the value of Size of list and Search Key: ";
    cin>>n>>k;

    vector<int>a(n);
    
    cout<<"Enter your list Number: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    int left, right;
    left = 0;
    right = a.size() - 1;
    int flag = 0;
    while(left<=right){
        int mid = (left + right) / 2;
        if(a[mid] == k){
            cout<<"Got your number in "<<mid<<" index"<<endl;
            flag = 1;
            break;
        }

        if(a[mid] < k)
            left = mid+1;
        else
            right = mid - 1;
    }

    if(flag==0)
        cout<<"Your search value is not in the list"<<endl;
}