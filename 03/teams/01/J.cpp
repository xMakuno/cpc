#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int As[n], Bs[n], S = 0 , A = 0;
        for(int i = 0; i < n; ++i){
            cin >> As[i];
        }
        for(int i = 0; i < n; ++i){
            cin >> Bs[i];
        }

        for(int i = 0; i < n; ++i){
            if(As[i] == -1 && Bs[i] == -1){
                continue;
            }else if(As[i] != -1 && Bs[i] == -1){
                S++;
            }else if(As[i] == -1 && Bs[i] != -1){
                A++;
            }else if(As[i] == Bs[i]){
                continue;
            }else if(As[i] > Bs[i]){
                A++;
            }else if(As[i] < Bs[i]){
                S++;
            }
        }
        if(A == S){
            cout << "Tie\n";
        }else if( A > S){
            cout << "Alfredo\n";
        }else{
            cout << "Saboya\n";
        }
    }
    return 0;
}