#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges(m);
        int temp;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                cin >> temp;
                if(temp){
                    edges[j].push_back(i);
                }
            }
        }
        bool good = true;
        for(int i = 0; i < m; ++i){
            if(edges[i].size() != 2){
                good = false;
                break;
            }
        }

        if(good){
            // cout << "Third test doesnt reach here\n";
            set<pair<int, int>> complete; // size should equal m
            for(int i = 0; i < m; ++i){
                complete.insert({edges[i][0], edges[i][1]});
            }
            if(complete.size() != m){
                good = false;
            }
        }
        cout << (good? "Yes\n": "No\n");
    }
    return 0;
}