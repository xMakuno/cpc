#include<bits/stdc++.h>
using namespace std;

int checkSide(pair<int, int> p, int n, int m){
    //Left Side or Right Side
    if(p.second == 1 || p.second == m){
        // Left Corner, either top or bottom
        if(p.first == 1 || p.first == n){
            return 2;
        }else{
            return 3;
        }
    }// Top Side or Bot Side
    else if(p.first == 1 || p.first == n){
        if(p.second == 1 || p.second == m){
            return 2;
        }else{
            return 3;
        }
    }else{
        return 4;
    }
}

void solve(){
    int n,m;
    cin >> n >> m;
    pair<int, int> start, finish;
    cin >> start.first >> start.second >> finish.first >> finish.second;
    cout << min( checkSide(start,n,m), checkSide(finish,n,m) ) << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}