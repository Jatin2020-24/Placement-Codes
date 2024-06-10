#include<bits/stdc++.h>
using namespace std;

int prim(int V, vector<vector<int>> adj[]){
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    vector<int> vis(V,0);
    int sum = 0;
    pq.push({0,0});

    while(!pq.empty()){
        auto it = pq.top();
        pq.pop();

        int wt = it.first;
        int node = it.second;

        if(vis[node] == 1) continue;

        sum+=wt;
        for(auto it: adj[node]){
            int adjNode = it[0];
            int edW = it[1];

            if(!vis[adjNode]) pq.push({edW, adjNode});
        }
    }
    return sum;
}

int main(){
    
}