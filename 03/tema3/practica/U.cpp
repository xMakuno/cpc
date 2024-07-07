#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    map<string, int> m;
    while(T--){
        string user;
        cin >> user;
        if(m.count(user) < 1){
            m.insert({user, 1});
            cout << "OK\n";
        }else{
            cout << user << m[user] << '\n';
            m[user]++;
        }
    }
    return 0;
}