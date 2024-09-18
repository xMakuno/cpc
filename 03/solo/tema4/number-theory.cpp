#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> divisors(ll n) {
    vector<ll> res;
    for (ll d = 1; d * d <= n; d++)
        if (n % d == 0) {
            res.push_back(d);
            if (d * d != n)
                res.push_back(n / d);
        }
    return res;
}

ll gcd(ll a, ll b){
    if(b == 0){
        return a;
    }else{
        return gcd(b, a % b);
    }
}

ll exp(ll a, ll b, ll m){
    if(b == 0) return 1;
    if(b % 2) return exp(a, b-1, m)*a %m;
    ll res = exp(a, b/2, m); 
    return res * res % m;
}

vector<ll> factors(ll n){
    vector<ll> res;
    for(ll d = 2; d * d <= n;  ++d){
        while(n % d == 0){
            res.push_back(d); n /=d;
        }
    }
    if(n > 1) res.push_back(n);
    return res;
}

bool prime(ll n){
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(ll d = 3; d*d < n; d+=2){
        if(n % d == 0){
            return false;
        }
    }
    return true;
}

vector<bool> sieve(ll n){
    vector<bool> prime(n+1,true);
    for(ll i = 2; i*i <= n; ++i){
        if(prime[i]){
            for(ll j = i*i; j <=n; j+=i){
                prime[j] = false;
            }
        }
    }
    return prime;
}

int main(){

    return 0;
}