#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, L;
    cin >> n >> L;
    set<int> S;
    for(int i = 1; i <= n; ++i){
        S.insert(i);
    }
    for(int i = 0; i < L; ++i){
        char option;
        cin >> option;
        if(option == 'A'){
            int l,r;
            cin >> l >> r;
            auto id1 = S.upper_bound(l);
            auto id2 = S.upper_bound(r);
            cout << *(id2) << " " << *(id1) << '\n';
        }else{
            int x;
            cin >> x;
            S.erase(x);
            cout << S.size() << '\n';
        }
    }
    return 0;
}