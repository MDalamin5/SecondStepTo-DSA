#include<stack>
#include<iostream>
#include<string>

using namespace std;
int main(){
    cout<<"Enter your Bracket Sequence: ";
    string input;
    cin>>input;

    stack<char> cst;
    for(int i=0; i<input.size(); i++){
        char bracket = input[i];

        if(bracket == '(' || bracket=='{' || bracket=='['){
            cst.push(bracket);
        }
        else{
            if(cst.empty()){
                cout<<"Ivalid Bracket Sequence"<<endl;
                return 0;
            }
            else if(bracket==')' && cst.top()=='('){
                cst.pop();
            }
            else if(bracket=='}' && cst.top()=='{'){
                cst.pop();
            }
            else if(bracket==']' && cst.top()=='['){
                cst.pop();
            }
        }
    }
    if(cst.empty()){
        cout<<"Its a valid Bracket Sequence"<<endl;
    }
    else
        cout<<"Invalid Bracket Sequence"<<endl;
}