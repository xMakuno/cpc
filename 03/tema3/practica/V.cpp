#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
int main(){
    int n;
    cin >> n;
    map<int, int> mp;
    int q; cin >> q;
    while(q--){
        int option;
        cin >> option;
        if(option == 1){
            int k;  cin >> k;
            mp.insert({k,-1});
        }else{
            int y;  cin >> y;
            auto it = mp.lower_bound(y);
            
            if(it == mp.end()){
                cout << "-1\n";
            }else{
                cout << (*it).first << '\n'; 
            }
        }
    }
    return 0;
}