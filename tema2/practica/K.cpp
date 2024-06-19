#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct person{
    int pos;
    float p;
    int a,b;
};

bool posCheck(int a, int b){
    if(a < b){
        return true;
    }else{
        return false;
    }
}
    /* 
    ai/bi = left person
    aj/bj = right person

    left has bigger fraction -> lower prob -> false
    left has smaller fraction -> higher prob -> true
    equal -> check position
    ai = aj
    */


bool personComp(person i, person j){
    if(i.p < j.p){
        return true;
    }else if(i.p > j.p){
        return false;
    }
    long long c = i.b*j.a;
    long long d = j.b*i.a;
    if(c < d){
        return true;
    }else if(c > d){
        return false;
    }else{
        return posCheck(i.pos, j.pos);
    }
}
void solve(){ // WA 9/23
    int n, a, b;
    cin >> n;
    person t[n];
    for(int i=0; i < n; ++i){
        cin >> a >> b;
        t[i].pos = i+1; 
        t[i].a = a;
        t[i].b = b;
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