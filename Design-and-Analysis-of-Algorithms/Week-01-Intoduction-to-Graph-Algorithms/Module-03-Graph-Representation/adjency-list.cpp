/*

0-----1
     / \
    2---3

0-- 1
1-- 0, 2, 3
2-- 1, 3
3-- 2, 1

if matrix[i][j] has direct connection then matrix[i][j]=1

*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int const node = 4;
    vector<int>adj_list[node];

    // O(E) == o(n^2) Time complexity
    adj_list[0] = {1};
    adj_list[1] = {0, 2, 3};
    adj_list[2] = {1, 3};
    adj_list[3] = {2, 1};

    for(int i=0; i<4; i++){
        cout<<i<<" --> {";
        for(int j=0; j<adj_list[i].size(); j++){
            
            cout<<adj_list[i][j]<<" ";
        }
        cout<<"}";
        cout<<endl;
    }
}