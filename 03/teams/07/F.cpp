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
        }else{
            v_o.push_back(alpha[i]);
        }
    }
    odds = v_o.size();
    evens = v_e.size();
    int ans = S.size();
    while(ans != 1){
        // cout << "length: " << ans << " odds: " << odds << " evens: " << evens << '\n';
        if((ans % 2 == 0 && odds == 0) || (ans % 2 == 1 && odds == 1)){
            cout << ans << '\n';
            return 0;
        }
        ans--;
        odds--;
        // evens++;
    }
    cout << ans << '\n';
    return 0;
}