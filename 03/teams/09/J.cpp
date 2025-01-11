#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, ans = 0;
    cin >> n;
    string name, name2;
    cin >> name  >> name2;
    int s1 = name.size(), s2 = name2.size(), s3 = s1 + s2;
    if(n != s1){
        for(int i = 0; i <= n-s1; ++i){
        ans += pow(26, n-s1);
    }
    }
    if(n != s2){
        for(int i = 0; i <= n-s2; ++i){
        ans += pow(26, n-s2);
    }
    }
    
    for(int i = 0; i <= n-s3; ++i){
        ans -= pow(26, n-s3);
    }
    cout << ans % (ll)(1e9 +7) << '\n';
    return 0;
}