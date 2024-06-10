#include<bits/stdc++.h>
using namespace std;

vector<int> dfs(int V, vector<int> adj[]){
    int vis[V] = {0};
    vis[0] = 1;

    stack<int> st;
    vector<int> res;

    st.push(0);

    while(!st.empty()){
        int node = st.top();
        st.pop();
        res.push_back(node);

        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                st.push(it);
            }
        }
    }
    return res;
}

int main(){

}