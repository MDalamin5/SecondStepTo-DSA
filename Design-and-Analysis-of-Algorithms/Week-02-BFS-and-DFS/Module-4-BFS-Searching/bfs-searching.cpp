// Use queue to implement the bfs
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"BFS Pseudo Code";
}
/*
BFS Pseudo code
BFS(src, graph):
    init an empty queue and visited array
    visited[src]=1 and q.push(src)
    while(!q.empty()):
        head=q.front()
        q.pop()
        output(head)
        for adj_node of head:
            if(visited[adj_node]==0):
                visited[adj_node]=1 and q.push(adj_node)



*/