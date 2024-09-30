#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string S;
    cin >> S;
    vector<int> alpha(26,0);
    for(int i = 0; i < S.size(); ++i){
        alpha[ S[i] - 'a' ]++;
    }
    int odds = 0, evens = 0;
    vector<int> v_o, v_e;
    for(int i = 0; i < 26; ++i){
        if(alpha[i] == 0 ) continue;
        if(alpha[i] % 2 == 0){
            v_e.push_back(alpha[i]);
            evens+=alpha[i];
        }else{
            v_o.push_back(alpha[i]);
            odds+=alpha[i];
        }
    }
    int ans = 0;
    ans = max(ans, evens);
    if(odds != 0){
        ans = max(ans, (int) (evens + odds - v_o.size() + 1));
    }
    if(v_o.size() > 0){
        sort(v_o.begin(),v_o.end());
        ans = max(ans, evens + v_o[v_o.size()]);
    }
    // cout << evens << " " << odds << '\n';
    cout << ans << '\n';
    return 0;
}