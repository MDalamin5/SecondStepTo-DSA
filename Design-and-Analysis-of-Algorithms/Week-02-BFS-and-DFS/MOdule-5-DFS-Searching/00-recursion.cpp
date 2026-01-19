#include<bits/stdc++.h>
using namespace std;

int calculate_sum(int n){
    if(n==1)
        return 1;
    else
        return calculate_sum(n-1) + n;
}

int main(){
    int result = calculate_sum(5);
    cout<<"The sum of: "<<result<<endl;
}