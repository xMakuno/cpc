#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct person{
    int pos;
    float p;
};
bool personComp(person a, person b){
    if(a.p < b.p){
        return true;
    }else if(a.p > b.p){
        return false;
    }else{
        if(a.pos < b.pos){
            return true;
        }else{
            return false;
        }
    }
}
void solve(){
    int n, a, b;
    cin >> n;
    person t[n];
    for(int i=0; i < n; ++i){
        cin >> a >> b;
        t[i].pos = i+1; 
        if(a != 0){
            t[i].p = 1 / 1 + (b/a);
        }else{
            t[i].p = 0;
        }
    }
    sort(t, t + n, personComp);
    for(int i=0; i < n; ++i){
        cout << t[i].pos << " \n"[i == n -1];
    }
}

int main(){
    solve();
    return 0;
}