/*
0-----1
     / \
    2---3

0 --> 1, 2
1 --> 2, 4
1 --> 3, 6
2 --> 1, 1
2 --> 3, 6
3 --> 2, 4
3 --> 1, 3

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int node = 4;
    vector<pair<int, int>> adj_list[4] = {};

    adj_list[0] = {{1, 2}};
    adj_list[1] = {{2, 4}, {3, 6}};
    adj_list[2] = {{1, 1}, {3, 6}};
    adj_list[3] = {{2, 4}, {1, 3}};

    
    // printing adjacency list
    for (int i = 0; i < node; i++) {
        cout << i << " --> ";
        for (auto edge : adj_list[i]) {
            cout << "(" << edge.first << ", " << edge.second << ") ";
        }
        cout << endl;
    }

}