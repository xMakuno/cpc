#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    int mx = 0, mn = 1e9 + 4;
    vector<int> v(n,0);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
        // cout << v[i] << endl;
        mx = max(v[i], mx);
        mn = min(v[i], mn);
    }
    cout << mx - mn << '\n';
    return 0;
}