#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll N, K, Q;
    cin >> N >> K >> Q;
    unordered_map<ll, ll> ranges, pS;
    map<ll, bool> admissible;
    for(ll i = 0; i < N; ++i){
        ll a, b;
        cin >> a >> b;
        for(ll j = a; j <= b; ++j){
            if(ranges.count(j) == 0){
                ranges[j] = 1;
            }
            else{
                ++ranges[j];
            }
            if(ranges[j] == K){
                admissible[j] = true;
            }
        }
    }
    if(admissible.size() == 0){
        for(ll i = 0; i < Q; ++i){
            ll a, b;
            cin >> a >> b;
            cout << 0 << "\n";
        }
        return 0;
    }
    pS[0] = 0;
    auto it = admissible.end();it--;
    auto it2 = admissible.begin();
    for(int i = 1; i <= it->first; ++i){
        if(it2 != admissible.end()){
            if(it2->first == i){
                it2++;
                pS[i] = pS[i-1] + 1;
            }
            else{
                pS[i] = pS[i-1];
            }
        }
        else{
            pS[i] = pS[i-1];
        }
    }
    /* for(int i = 0; i < admissible.size(); ++i){
        cout << i << ": " << admissible.at(i) << "\n";
    }
    cout << "-------------------\n";
    for(auto i = pS.begin(); i != pS.end(); i++){\
        cout << i->first << ": " << i->second << "\n";
    } */
    for(ll i = 0; i < Q; ++i){
        ll a, b, ans = 0;
        cin >> a >> b;
        ll first, second;
        if(a <= it->first){
            first = pS[a - 1];
        }
        else{
            first = pS[it->first];
        }
        if(b <= it->first){
            second = pS[b];
        }
        else{
            second = pS[it->first];
        }
        ans = second - first;
        cout << ans << "\n";
    }
    return 0;
}
/*
6 3 3
1 200000
1 2
90 94
45 46
2 20
46 90
90 96
1 40
2 200000

output
1
1
3

input 1
1 1 1
15 17
4 9

output1
0

input2
2 1 3
3 3
7 11
11 11
1 11
16 19

output2
1
6
0 

input 1:
5 4 1
4 27
9 10
7 25
12 27
5 21
11 18

correct output 1:
7

---------------------------
input 2:
2 2 1
1 2
3 4
5 10

output 2:
0

--------------------------

input 0:
1 1 2
1 9
5 10
3 10

output 0:
5
7

input 1:
2 1 2
3 4
1 5
3 6
2 10

output 1:
3
4

*/