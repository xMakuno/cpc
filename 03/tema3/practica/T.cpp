#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T =1;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;
        priority_queue<ll> pq;
        ll ans = 0;
        for(ll i =0; i < n; ++i){
            ll temp;
            cin >> temp;
            pq.push(-temp);
        }
        while(pq.size() > 1){
            ll a,b;
            a = pq.top(); pq.pop(); a *=-1;
            b = pq.top(); pq.pop(); b *=-1;
            ll sum = a + b;
            pq.push(-(a+b));
            ans += sum;
        }
        cout << ans << '\n';
    }
    return 0;
}