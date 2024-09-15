#include<bits/stdc++.h>
#define TEST(a, b) ((a) & (1LL << (b)))
#define SET(a, b) ((a) | (1LL << (b)))
#define CLEAR(a, b) ((a) & ~(1LL << (b)))
#define FLIP(a, b) ((a) ^ (1LL << (b)))
#define EP2(n) (n == (n&-n))
#define all(x) x.begin(), x.end()

using namespace std;
typedef long long ll;
int main(){
    vector<ll> vll;
    for(int i = 0; i < 60; ++i){
        for(int j = i+1; j < 60; ++j ){
            for(int k = j+1; k < 60; ++k){
                if(i != j && j != k){
                    ll num = (1LL << i) + (1LL << j) + (1LL << k); 
                    vll.push_back(num);
                }
            }
        }
    }
    sort(all(vll));

    ll T = 1;
    cin >> T;
    while(T--){
        ll N; cin >> N;
        auto it = upper_bound(all(vll),N);
        if(N < vll[0]) cout << "-1\n";
        else cout << *(--it) << endl;
    }
    return 0;
}