#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n,0);
        for(ll i = 0; i < n; ++i){
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        for(ll i = 1; i < n; ++i){
            v[i] += v[i-1];
        }
        while(q--){
            ll q_i;
            cin >> q_i;
            if(v[n-1] < q_i){
                cout << "-1\n";
                continue;
            }
            ll lo = 0, hi = n-1, ans = -1;
            while(lo <= hi){
                ll mid = (lo + hi) >> 1; //dividing by 2 with bits
                if(v[mid] >= q_i){
                    ans = mid;
                    hi = mid - 1;
                }else{
                    lo = mid + 1;
                }
            }
            //index -> position
            cout << ans+1 << '\n';
        }
        
    }
    return 0;
}