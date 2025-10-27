/*
Graph Representations
Topics: Adjacency list

0-----1
     / \
    2---3

* total node = 4
* total edge = 4
* assume its undirected and unweighted

So the matrix will be -> num. of node x num. of node
                      -> 4 x 4

matrix[i][j] = 1
if and only if (i->j) using only one edge

list:
0 --> 1
1 --> 0, 2, 3
2 --> 3, 1
3 --> 2, 1

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int nodes = 4;
    vector<int> adj_list[nodes];

    adj_list[0] = {1};
    adj_list[1] = {0, 2, 3};
    adj_list[2] = {3, 1};
    adj_list[3] = {2, 1};

    // Displaying the adj_list
    for(int i=0; i<nodes; i++){
        cout<<i<<"-->";
        for(int j=0; j<adj_list[i].size(); j++){
            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }
}