#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int A, W, V;
    cin >> A >> W >> V;
    if(A <= W/V){
        cout << "1\n";
    }else{
        cout << "0\n";
    }
    return 0;
}