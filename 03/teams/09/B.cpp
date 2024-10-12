#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    char a;
    set<char> S;
    for(int i = 0; i < 12; ++i){
        cin >> a;
        if(a != '-'){
        S.insert(a);

        }
    }
    cout << S.size() << '\n';
    return 0;
}