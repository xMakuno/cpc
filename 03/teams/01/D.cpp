#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, m;
    cin >> n >> m;
    char graph[n][m];
    vector<pair<int,int>> guards(0);
    // vector<vector<int>> guards(4); // >, v, <, ^
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> graph[i][j];
            if(graph[i][j] == '>' || graph[i][j] == '<' || graph[i][j] == 'v' || graph[i][j] == '^'){
                guards.push_back({i, j});
            }
        }
    }
    cout << " ";
    for(int i = 0; i < m; ++i){
        cout << i;
    }
    cout << '\n';
    for(int i = 0; i < n; ++i){
        cout << i;
        for(int j = 0; j < m; ++j){
            cout << graph[i][j];
        }
        cout << "\n";
    }
    for(auto &[x,y] : guards){
        cout << graph[x][y] << '\n';
    }
    return 0;
}