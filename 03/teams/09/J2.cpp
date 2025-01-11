#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 1e9 + 7;
ll exp(ll a, ll b, ll m){
    if(b == 0) return 1;
    if(b % 2) return exp(a, b-1, m)*a %m;
    ll res = exp(a, b/2, m); 
    return res * res % m;
}

int main(){
    ll n, ans = 0;
    cin >> n;
    string name, name2;
    cin >> name  >> name2;
    int s1 = name.size(), s2 = name2.size(), s3 = s1 + s2;
    if(n != s1){
        ll ex = exp(26, n-s1, MOD);
        for(int i = 0; i <= n-s1; ++i){
            ans += ex;
        }
    }
    if(n != s2){
        ll ex = exp(26, n-s2, MOD);
        for(int i = 0; i <= n-s2; ++i){
            ans += ex;
        }
    }
    // removing duplicate strings
    ll k = s1 + s1;
    /* while(k <= n){
        for(int i = 0; i <= n-k; ++i){
            ans -= pow(26, n-k);
        }
        k += s1;
    } */
    k = s2 + s2;
    /* while(k <= n){
        for(int i = 0; i <= n-k; ++i){
            ans -= pow(26, n-k);
        }
        k += s2;
    } */
    k = s3;
    while(k <= n){
        ll ex = exp(26, n-k, MOD);
        for(int i = 0; i <= n-k; ++i){
            ans -= ex * 2;
        }
        k += s3;
    }

    cout << ans % (ll)(MOD) << '\n';
}