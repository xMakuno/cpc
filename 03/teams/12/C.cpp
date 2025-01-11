#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll romanToArab(char num){
    switch(num){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}

int main(){
    ll T = 1;
    cin >> T;
    while(T--){
        string romanNum;
        cin >> romanNum;
        ll ans = 0;
        ll last = -1;
        bool sub = false;
        for(ll i = romanNum.size()-1; i >= 0; --i){
            ll curr = romanToArab(romanNum[i]);
            if(curr > last){
                sub =  false;
                ans += curr;
            }else if(curr < last){
                sub = true;
                ans -= curr;
            }else{
                if(sub){
                    ans -= curr;
                }else{
                    ans += curr;
                }
            }
            last = curr;
        }
        cout << ans << '\n';
    }
    return 0;
}