#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n];
    for(ll i = 0; i < n; ++i){
        ll t;
        cin >> t;
        a[i] = t;
    }
    sort(a, a + n);
    for(ll i = 0; i < m; ++i){
        ll t;
        cin >> t;
        ll lo = 0, hi = n - 1;
        while(lo < hi){
            ll mid = (lo + hi + 1) / 2;
            if(a[mid] <= t){
                lo = mid;
            }
            else{
                hi = mid - 1;
            }
        }
        cout << (lo == 0 ? (a[lo] > t ? 0 : 1) : lo + 1) << " \n"[i == m - 1];
    }
}

int main(){
    solve();
    return 0;
}