#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

bool vis[N];
vector<int> g[N];

void dfs(int vertex, int par=0){
    /*
        Take action on vertex after entering the vertex.
    */
    vis[vertex] = true;

    for(int child: g[vertex]){
        if(vis[child]) continue;
        dfs(child);
        /*
            Take action on child after exiting child node.
        */
    }
    /*
        Take action on vertex before exiting the vertex.
    */
}

int main(){
    int n; cin>>n;

    for(int i=0;i<n-1;i++){
        int x, y; cin>>x>>y;

        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
}