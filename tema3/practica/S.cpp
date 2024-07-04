#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int Q = 1;
    cin >> Q;
    map<ll, ll> arr;
    while(Q--){
        int action;
        cin >> action;
        if(action == 0){
            ll pos, val;
            cin >> pos >> val;
            if(arr.count(pos)>0){
                arr.erase(pos);
            }
            arr.insert({pos, val});
        }else{
            ll pos;
            cin >> pos;
            cout << arr[pos] << '\n';
        }
    }
    return 0;
}