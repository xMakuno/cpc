#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

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
    int n; cin >> n;
    vector<bool> prime(1e5 + 5,true);
    for(ll i = 2; i*i <= 1e5 + 5; ++i){
        if(prime[i]){
            for(ll j = i*i; j <= 1e5 +5; j+=i){
                prime[j] = false;
            }
        }
    }
    if(n >= 3){
        cout << 2 << '\n';
    }else{
        cout << 1 << "\n";
    }
    for(int i = 2; i <= n+1; ++i){
        if(prime[i]){
            cout << 1;
        }else{
            cout << 2;
        }
        cout << " ";
    }
    cout << '\n';
    return 0;
}