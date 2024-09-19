#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i){
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    if(nums[0] != nums[1]){
        cout << "YES\n";
        return;
    }
    for(int i = 1; i < n; ++i){
        if(nums[i] % nums[0] != 0){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}