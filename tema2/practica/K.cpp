#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct part{
    ll a, b, i;
};

bool comp(part a, part b){
    ll aD = a.a + a.b, bD = b.a + b.b;
    if(aD == bD){
        if(a.a > b.a){
            return true;
        }
        else if (a.a == b.a){
            if(a.i < b.i){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
    else{
        ll cD = lcm(aD, bD);
        ll aX = cD / aD, bX = cD / bD;
        ll aT = a.a * aX, bT = b.a * bX;
        if(aT > bT){
            return true;
        }
        else if (aT == bT){
            if(a.i < b.i){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
}

void solve(){
    int n;
    cin >> n;
    part sV[n];
    for(int i = 0; i < n; ++i){
        int a, b;
        part t;
        cin >> sV[i].a >> sV[i].b;
        sV[i].i = i+1;
    }
    sort(sV, sV + n, comp);
    for(int i = 0; i < n; ++i){
        cout << sV[i].i << " \n"[i == n];
    }
}

int main(){
    solve();
    return 0;
}