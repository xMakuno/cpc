#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false); // literally this makes it fast enough for AC
    cin.tie(nullptr); // same with this line
    int n;  cin >> n;
    set<int> mp;
    int q;  cin >> q;
    while(q--){
        int option; cin >> option;
        if(option == 1){
            int k;  cin >> k;
            mp.insert(k);
        }else{
            int y;  cin >> y;
            auto it = mp.lower_bound(y);
            if(it == mp.end()){
                cout << "-1\n";
            }else{
                cout << (*it) << '\n'; 
            }
        }
    }
    return 0;
}