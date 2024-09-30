#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n , q;
    while(scanf("%lld %lld", &n, &q) != EOF){
        vector<vector<int>> al(1e6+5);
        for(int i = 0; i < n; ++i){
            int temp;
            cin >> temp;
            al[temp].push_back(i+1);
        }
        int k, v;
        for(int i = 0; i < q; ++i){
            cin >> k >> v;
            if(al[v].size() < k){
            cout << "0\n";
            }else{
                cout << al[v][k-1] << '\n';
            }
        }
    }
    return 0;
}