/*

0-----1
     / \
    2---3

0--1
1--0
1--2
1--3
2--1
2--3
3--2
3--1

if matrix[i][j] has direct connection then matrix[i][j]=1

*/

#include<iostream>
using namespace std;

int main(){
    int const nodes = 4;
    int matrix[nodes][nodes] = {};

    // O(E)  maximum number of edge is n^2
    matrix[0][1]=1;
    matrix[1][0]=1;
    matrix[1][2]=1;
    matrix[1][3]=1;
    matrix[2][1]=1;
    matrix[2][3]=1;
    matrix[3][2]=1;
    matrix[3][1]=1;
    

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}