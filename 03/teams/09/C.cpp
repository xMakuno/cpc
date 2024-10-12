#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n, m;
    cin >> n >> m;
    bool array1[n], array2[n];
    memset(array1, false, sizeof(array1));
    memset(array2, false, sizeof(array2));
    for(int t = 0; t < m; ++t){
        int i, L;
        cin >> i >> L;
        if(L==1) array1[i-1] = 1;
        else if( L == 2) array2[i-1] = 1;
    }
    for(int i = 0; i < n; ++i){
        if(array1[i] && array2[i]) cout << i + 1 << '\n';
    }
    return 0;
}

