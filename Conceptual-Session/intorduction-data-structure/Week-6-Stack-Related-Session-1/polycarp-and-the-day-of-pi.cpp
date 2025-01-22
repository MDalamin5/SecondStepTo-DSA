// problem link: https://codeforces.com/problemset/problem/1790/A
#include<iostream>
#include<string>
using namespace std;


int main(){
    string pi = "314159265358979323846264338327";
    int t;
    cin>>t;
    while (t--){
    string input;
    cin>>input;

    int count = 0;
    for(int i=0; i<input.size(); i++){
        if((pi[i]) == input[i]){
            count++;
        }
        else
            break;
    }
    cout<<count<<endl;
    }
    

    return 0;
}