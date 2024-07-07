#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
int main(){
    int n, x;
    cin >> n >> x;
    set<int> s;
    int q; cin >> q;
    while(q--){
        int option;
        cin >> option;
        if(option == 1){
            int k;  cin >> k;
            s.insert(k);
        }else{
            int y;  cin >> y;
            auto it = s.lower_bound(y);
            if(it != s.end()){
                cout << (*it) << '\n';
            }else{
                cout << "-1\n"; 
            }
        }
    }
    return 0;
}