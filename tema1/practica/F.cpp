#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    vector<ll> vec;
    ll N, Ans = 0, A1 = 0, A2 = 0;
    cin >> N;
    for(ll i = 0; i < N; ++i){
        ll t;
        cin >> t;
        A1 += t;
        vec.push_back(t);
    }
    for(ll i = vec.size() - 1; i > 0; --i){
        A2 += vec.at(i);
        A1 -= vec.at(i);
        if(A1 == A2){
            ++Ans;
        }
    }
    cout << Ans << "\n";
    return 0;
}