#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//TLE; it can be solved with DSU but DFS is sufficient.

void dfs(vector<bool> &visited, vector<vector<int>> &al, int u){
    visited[u] = true;
    // cout << "looking: " << u << '\n'; 
    for(auto &v : al[u]){
        if(visited[v] == false){
            dfs(visited, al, v);
        }
    }
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<bool> visited(n+1,false);
    vector<vector<int>> al(n+1);
    for(int i = 0; i < m; ++i){
        int u, v;
        cin >> u >> v;
        al[u].push_back(v);
        al[v].push_back(u);
    }
    int ans = 0;
    for(int i = 1; i <= n; ++i){
        if(visited[i] == false){
            ans++;
            dfs(visited, al, i);
        }
    }
    cout << ans - 1 << '\n';
    return 0;
}