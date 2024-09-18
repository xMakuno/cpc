#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n, sum = 1;
        cin >> n;
        if(n == 1){
            cout << 0 << '\n';
            continue;
        }
        for(int d = 2; d*d<=n; d++){
            if(n % d == 0){
                sum+=d + (n/d == d ? 0 : n/d );
            }
        }
        cout << sum << '\n';
    }
    return 0;
}