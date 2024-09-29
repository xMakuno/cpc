#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = 1, sum = v[0];
    for(int i = 1; i < n; ++i){
        if(sum < v[i]){
            sum += v[i];
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}