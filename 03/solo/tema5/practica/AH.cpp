#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;
        vector<int> edges(m,0);
        int temp;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                cin >> temp;
                if(temp){
                    edges[j]++;
                }
            }
        }
        bool good = true;
        for(int i = 0; i < m; ++i){
            if(edges[i] != 2){
                good = false;
                break;
            }
        }
        cout << (good? "Yes\n": "No\n");
    }
    return 0;
}