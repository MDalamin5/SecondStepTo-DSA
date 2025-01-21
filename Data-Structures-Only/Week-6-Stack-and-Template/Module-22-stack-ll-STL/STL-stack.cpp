#include<stack>
#include<iostream>

using namespace std;
int main(){
    stack<int> st;
    st.push(44);
    cout<<st.empty()<<endl;
    st.pop();
    st.push(55);
    st.push(55);
    st.push(55);
    st.push(55);
    cout<<st.top()<<endl;
    cout<<"Stack size is: "<<st.size()<<endl;
}