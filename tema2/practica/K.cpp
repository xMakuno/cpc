#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<long double, ll> pdi;

int main(){
    int n;
    ll a, b;
    cin >> n;
    vector<pdi> v(n);
    for(ll i=0; i < n; ++i){
        cin >> a >> b;
        b += a; // B is now the denominator
        ll d = gcd(a,b);
        a /= d;
        b /= d;
        v[i].first = (long double) a/b;
        v[i].second = -(i+1);
    }
    sort(v.rbegin(),v.rend());
    for(int i=0; i < n; ++i){
        cout << -v[i].second << " \n"[i == n-1];
    }

    return 0;
}