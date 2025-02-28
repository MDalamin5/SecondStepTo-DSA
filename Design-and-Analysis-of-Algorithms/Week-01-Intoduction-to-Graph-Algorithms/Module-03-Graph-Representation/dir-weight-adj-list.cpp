#include<iostream>
#include<vector>
using namespace std;
int main(){
    int const node = 4;
    vector<pair<int, int>> adj_list[node];

    // My choice
    adj_list[0] = {{1, 2}};
    adj_list[1] = {{2, 4}};
    adj_list[3] = {{2, 8}, {1, 7}};

    //Different way to graph init Phitorn choice
    // adj_list[0].push_back({1, 2});
    // adj_list[1].push_back({2, 4});
    // adj_list[3].push_back({2, 8});
    // adj_list[3].push_back({1, 7});
    

    for(int i=0; i<node; i++){
        cout<<i<<"--> ";
        for(int j=0; j<adj_list[i].size(); j++){
            cout<<adj_list[i][j].first<<" "<<adj_list[i][j].second<<" ";
        }
        cout<<endl;
    }
}