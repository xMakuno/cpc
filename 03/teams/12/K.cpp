#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll N, P;
    cin >> N >> P;
    N = (N-P) >> 1;
    cout << (((N % P) * 2) == P ? 0 : ((N % P) * 2 ))  << '\n';
    return 0;
}