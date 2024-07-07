#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

// 2 pointers + BinSearch
int main(){
    int n, x;
    cin >> n >> x;
    vector<pii> v(n+1);
    for(int i = 0; i < n; ++i){
        cin >> v[i+1].first;
        v[i+1].second = i+1;
    }
    sort(v.begin(),v.end());
    int l = 1, r = n;
    while(l < r){
        ll sum = v[l].first + v[r].first;
        if(sum == x){
            cout << v[l].second << " " << v[r].second << '\n';
            return 0;
        }else if(sum < x){
            l++; //sum is lower so we need a bigger num
        }else{
            r--; // sum is higher so we need a lower num
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}