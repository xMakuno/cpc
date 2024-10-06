#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        ll top = 0, res = 0;
        for(int i = 0; i < n; ++i){
            ll temp;
            cin >> temp;
            top = max(top + temp, temp);
            res = max(res, top);
            cout << res << " ";
        }
        cout << '\n';
    }
    return 0;
}