#include<iostream>
#include<queue>

using namespace std;

int getDigit(int x){
    int count = 0;
    while(x != 0){
        x = x / 10;
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>> n;
    vector<int> a(n); 
    vector<int> b(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    priority_queue<int> p;
    priority_queue<int> q;

    for(int i=0; i<n; i++){
        p.push(a[i]);
    }
    for(int i=0; i<n; i++){
        q.push(b[i]);
    }

    int operation = 0;
    while(!q.empty()){
        if(p.top() == q.top()){
            p.pop();
            q.pop();
            continue;
        }
        operation++;

        if(p.top() > q.top()){
            int val = p.top();
            p.pop();
            p.push(getDigit(val));
        }
        else{
            int val2 = q.top();
            q.pop();
            q.push(getDigit(val2));
        }
    }
    cout<<operation<<endl;

}