#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> factors(ll n){
    vector<ll> res;
    res.push_back(1);
    for(ll d = 2; d * d <= n;  ++d){
        while(n % d == 0){
            if(res.back() != d){
                res.push_back(d);
            }
            n /=d;
        }
    }
    if(n > 1) res.push_back(n);
    return res;
}


int main(){
    ll n;
    cin >> n;
    vector<ll> ans = factors(n);
    if(n == 1){
        cout << "1\n";
        return 0;
    }
    for(ll i = 1; i < ans.size(); ++i){
        cout << ans[i] << '\n';
    }
    return 0;
}