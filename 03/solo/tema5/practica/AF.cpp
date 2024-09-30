#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n, m;
    cin >> n >> m;
    char ranch[n][m];
    vector<pair<int, int>> sheep;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> ranch[i][j];
            if(ranch[i][j] == 'S'){
                sheep.push_back({i,j});
            }
        }
    }
    vector<pair<int,int>> next;
    next.push_back({0,1});
    next.push_back({1,0});
    next.push_back({0,-1});
    next.push_back({-1,0});
    for(auto s : sheep){
        for(auto t : next){
            pair<int,int> check = { s.first + t.first, s.second + t.second};
            if(check.first >= 0 && check.first < n && check.second >= 0 && check.second < m){
                if( ranch[check.first][check.second] == 'W' ){
                    cout << "No\n";
                    return 0;
                }
            }
        }
    }
    cout << "Yes\n";
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(ranch[i][j] == '.'){
                cout << 'D';
            }else{
                cout << ranch[i][j];
            }
        }
        cout << '\n';
    }
    return 0;
}