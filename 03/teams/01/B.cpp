#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    string name;
    cin >> name;
    for(int i = 1; i < name.length()-1;++i){
        if(name[i] == name[i-1] || name[i] == name[i+1]){
            cout << "yes\n";
            return;
        }else if(name[i-1] == name[i+1]){
            cout << "yes\n";
            return;
        }
    }
    cout << "no\n";
    return;
}

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}