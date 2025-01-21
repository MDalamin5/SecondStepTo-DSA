#include<iostream>
#include<stack>
#include<string>
#include<string.h>

using namespace std;
int precedence(char operand){
    if(operand == '+' || operand == '-')
        return 0;
    return 1;
}

int main(){
    cout<<"Enter your Infix equation: ";
    string input;
    cin>>input;
    stack<char>st;
    string result;

    for(int i=0; i<input.size(); i++){
        char now = input[i];
        if(now >= 'a' && now <= 'z')
            result += now;
        else{
            while(st.size() && precedence(st.top()) >= precedence(now) ){
                result += st.top();
                st.pop();
            }
            st.push(now);
        }
    }
    while(st.size()){
        result += st.top();
        st.pop();
    }

    cout<<result<<endl;
}