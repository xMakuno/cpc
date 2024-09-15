#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int arr[n], S = 0 , A = 0;
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
        }
        for(int i = 0; i < n; ++i){
            int temp;
            cin >> temp;
            if(temp == -1 && arr[i] == -1){
                continue;
            }else if(temp == -1 || arr[i] == -1){
                if(temp == -1){
                    A++;
                }else{
                    S++;
                }
            }else{
                if(temp == arr[i]){
                    continue;
                }else if(temp < arr[i]){
                    A++;
                }else{
                    S++;
                }
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