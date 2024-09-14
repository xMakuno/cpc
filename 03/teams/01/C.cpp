#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int x, y;
        cin >> x >> y;
        if(x&1){
            x++;
        }
        if(ceil(x/2)<= y){
            cout << "passed\n";
        }else{
            cout << "failed\n";
        }
    }
    return 0;
}