#include<iostream>
#include<vector>
using namespace std;
class Stack {
public:
    static const int MAX_SIZE=500;
    int a[MAX_SIZE];
    int stack_size;
    Stack(){
        stack_size = 0;
    }

    void push(int data){
        if((stack_size + 1) > MAX_SIZE){
            cout<<"Stack is full"<<endl;
            return;
        }
        a[stack_size++] = data;
    }

    void pop(){
        if(stack_size == 0){
            cout<<"Opps!! Your stack is empty!"<<endl;
            return;
        }
        a[stack_size-1] = 0;
        stack_size = stack_size - 1;
    }

    int top(){
        if(stack_size == 0){
            cout<<"Opps!! Your stack is empty!"<<endl;
            return -1;
        }
        return a[stack_size - 1];
    }

    void DisplayStackElements(){
        if(stack_size == 0){
            cout<<"Opps!! Your stack is empty!"<<endl;
            return;
        }
        for(int i=0; i<stack_size; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }


};

int main(){
    Stack st;
    st.pop();
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.DisplayStackElements();
    st.pop();
    st.DisplayStackElements();
    cout<<"Top elements: "<<st.top();
    return 0;
}