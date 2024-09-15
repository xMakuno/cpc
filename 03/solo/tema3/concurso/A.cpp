#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main(){
    int n; cin >> n;
    priority_queue<pii> del;
    map<int, int> eaten;
    for(int i = 0; i < n; ++i){
        int a, c;
        cin >> a >> c;
        del.push({-a,c});
    }
    int mx = -1;
    while(!del.empty()){
        pii min_candy = del.top();
        del.pop();
        if(eaten.count(min_candy.second) < 1){
            eaten.insert({min_candy.second, 1});
            mx = max(mx, -min_candy.first);
        }
    }
    cout << mx << '\n';
    return 0;    
}