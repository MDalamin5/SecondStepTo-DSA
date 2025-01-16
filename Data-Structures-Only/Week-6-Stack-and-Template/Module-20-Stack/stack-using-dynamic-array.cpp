#include<iostream>
#include<vector>
using namespace std;
class Stack {
public:
    int *a;
    int stack_size;
    int cap;
    Stack(){
        stack_size = 0;
        cap = 1;
        a = new int[1];
    }

    void increase_size(){
        int *temp;
        temp = new int[cap*2];
        for(int i=0; i<cap; i++){
            temp[i] = a[i];
        }
        swap(a, temp);
        delete []temp;
        cap = cap*2;
    }
    void push(int data){
        if((stack_size + 1) > cap){
            increase_size();
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
    cout<<"Top elements: "<<st.top()<<endl;
    cout<<st.stack_size<<" "<<st.cap;
    return 0;
}