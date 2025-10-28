/*
0---->1
     / \
    2<--3

* total node = 4
* total edge = 4
* assume its undirected and unweighted

So the matrix will be -> num. of node x num. of node
                      -> 4 x 4

matrix[i][j] = 1
if and only if (i->j) using only one edge

list:
   2
0 --> 1
   4
1 --> 2
   7
3 --> 1
   8
3 --> 2

0 --> (1, 2)
1 --> (2, 4)
3 --> (1, 7) (2, 8)
time complexity: n^2
space complexity: n^2
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int nodes = 4;
    vector<pair<int, int>> adj_list[nodes];

    // O(E*2) --> O(E) --> O(n^2)
    // adj_list[0].push_back({1, 2});
    // adj_list[1].push_back({2, 4});
    
    // adj_list[3].push_back({2, 8});
    // adj_list[3].push_back({1, 7});


    // Different approach to init the matrix
    adj_list[0] = {{1, 2}};
    adj_list[1] = {{2, 4}};
    adj_list[2] = {};
    adj_list[3] = {{2, 8}, {1, 7}};

    // Displaying the adj_list
    // O(E*2) --> O(E) --> O(n^2)
    for(int i=0; i<nodes; i++){
        cout<<i<<"-->";
        for(int j=0; j<adj_list[i].size(); j++){
            cout<<"("<<adj_list[i][j].first<<", "<<adj_list[i][j].second<<")";
        }
        cout<<endl;
    }
}