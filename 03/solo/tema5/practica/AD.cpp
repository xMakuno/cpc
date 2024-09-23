#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAX = 1e5 +5;

int al[MAX];

int main(){
    freopen("planting.in", "r", stdin);
    freopen("planting.out", "w", stdout);
    int n; cin >> n;
    for(int i = 1; i < n; ++i){
        int x, y;
        cin >> x >> y;
        al[x]++;
        al[y]++;
    }
    int ans = 0;
    for(int i = 1; i <= n; ++i){
        ans = max(ans, al[i]+1);
    }
    cout << ans << '\n';
    return 0;
}