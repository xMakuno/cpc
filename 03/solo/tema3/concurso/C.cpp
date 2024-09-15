#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int x, n;
    cin >> x >> n;
    set<int> points;
    for(int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        points.insert(temp);
    }
    return 0;
}