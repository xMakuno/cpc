#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N, Q;
    cin >>  N >> Q;
    vector<ll> arr(1000000000,0);
    for(ll i = 0; i < N; ++i){
        ll temp;
        cin >> temp;
        arr[temp]++;
    }
    for(ll i = 1; i < N; ++i){
        arr[i] += arr[i-1];
    }
    while(Q--){
        ll l, r;
        cin >> l >> r;
        cout << arr[r] - arr[l] << '\n';
    }
    return 0;
}