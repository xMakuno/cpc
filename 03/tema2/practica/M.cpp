#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(vector<int> v, int n, int k, int m){
    ll sum = 0;
    for(int i = n/2; i < n;++i){
        sum += max(0LL,(ll) m-v[i]);
        if(sum > k){
            return false;
        }
    }
    return true;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int l = 0, r = INT_MAX;
    while(r - l > 1){
        int m = l + (r-l)/2;
        if(check(v,n,k,m)){
            l = m;
        }else{
            r = m;
        }
    }
    cout << l << '\n';
    return 0;
}