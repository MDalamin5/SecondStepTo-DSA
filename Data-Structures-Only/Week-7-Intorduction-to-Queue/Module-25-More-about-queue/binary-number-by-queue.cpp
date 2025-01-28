#include<queue>
#include<iostream>

using namespace std;
int main(){
    queue<string> mQ;
    string binary = "";
    mQ.push("1");

    int number;
    cout<<"Enter your number: ";
    cin>>number;

    for(int i=0; i<number; i++){
        string strr = mQ.front();
        mQ.pop();
        cout<<strr<<endl;
        binary += strr;
        mQ.push(strr + "0");
        mQ.push(strr + "1");
    }

}