#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        set<ll> factors;
        factors.insert(1); factors.insert(n);
        for(int d = 2; d*d <= n; ++d){
            if(n % d == 0){
                factors.insert(d);
                factors.insert(n/d);
            }
        }
        cout << factors.size() << endl;
    }
    return 0;
}