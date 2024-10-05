#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int top = 0, res = 0;
        for(int i = 0; i < n; ++i){
            int temp;
            cin >> temp;
            top = max(top + temp, temp);
            res = max(res, top);
            cout << res << " ";
        }
        cout << '\n';
    }
    return 0;
}