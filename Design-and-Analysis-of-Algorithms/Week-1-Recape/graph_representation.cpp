/*
Graph Representations
Topics: Adjacency Matrix

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

0 -> 1
1 -> 0
1 -> 2
1 -> 3
2 -> 1
2 -> 3
3 -> 2
3 -> 1

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int nodes = 4;
    int matrix[nodes][nodes] = {}; // empty '{}' for zero matrix.

    // set all index value is zero
    // for(int i=0; i<nodes; i++){
    //     for(int j=0; j<nodes; j++){
    //         matrix[i][j] = 0;
    //     }
    // }

    // inserting the graph value into the matrix
    matrix[0][1] = 1;
    matrix[1][0] = 1;
    matrix[1][2] = 1;
    matrix[1][3] = 1;
    matrix[2][1] = 1;
    matrix[2][3] = 1;
    matrix[3][1] = 1;
    matrix[3][2] = 1;
    

    //output the value
    for(int i=0; i<nodes; i++){
        for(int j=0; j<nodes; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}