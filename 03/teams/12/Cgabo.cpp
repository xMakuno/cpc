#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll convert(char a){
    switch(a){
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
    }
    return -1;
}

void solve(){
    string num;
    char curr, past;
    cin >> num;
    curr = num[0];
    ll count = 1, count2, tot = 0;
    bool sub = false, add = true;
    for(ll i = 1; i < num.length(); ++i){
        if(num[i] == curr && !sub){
            count++;
        }
        else if(num[i] != curr && !sub){
            past = curr;
            curr = num[i];
            if(convert(curr) > convert(past)){
                count2 = 1;
                sub = true;
                add = false;
            }
            else{
                tot += (convert(past) * count);
                count = 1;
            }
        }
        else if(num[i] == curr && sub){
            count2++;
        }
        else{
            tot += (convert(curr) * count2) - (convert(past) * count);
            curr = num[i];
            count = 1;
            sub = false;
            add = true;
        }
    }
    if(sub){
        tot += (convert(curr) * count2) - (convert(past) * count);
    }
    if(add){
        tot += (convert(curr) * count);
    }
    cout << tot << "\n";
}

int main(){

    /* freopen("test.txt", "r", stdin);
    freopen("results.txt", "w", stdout);
    */

    //solve();

    ll T;
    cin >> T;
    while(T--){
        solve();
    }

    //std::cout << res << " \n"[i == n - 1];
    // 1LL b

    return 0;
}