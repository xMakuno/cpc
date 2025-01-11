#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll N, M;
    cin >> N >> M;
    priority_queue<pair<ll, ll>> scouts;
    for(ll i = 0; i < M; ++i){
        scouts.push({0,0});
    }
    vector<ll> items(N);
    for(ll i = 0; i < N; ++i){
        cin >> items[i];
    }
    sort(items.begin(), items.end());
    ll ans = -1;
    while(!items.empty()){
        ll heaviest = items.back();
        items.pop_back();
        pair<ll,ll> russell = scouts.top();
        scouts.pop();
        russell.first--;
        russell.second -= heaviest;
        // cout << "items in scout: " << -russell.first << " weight in scout: " << -russell.second << '\n';
        if(-russell.first < 2){
            scouts.push(russell);
        }
        ans = max(ans, -russell.second);
    }
    cout << ans << '\n';
    return 0;
}