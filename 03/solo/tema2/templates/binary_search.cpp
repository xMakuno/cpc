#include<bits/stdc++.h>

using namespace std;

int main(){

    int N,M;
    cin >> N >> M;

    vector<int> A(N + 1),B(M + 1);

    for(int i = 1;i <= N;i++){
        cin >> A[i];
    }

    for(int i = 1;i <= M;i++)
        cin >> B[i];

    sort(A.begin() + 1, A.end());

    for(int i = 1;i <= M;i++){
        int bi = B[i];

        // int sol = 0;
        // for(int j = 1;j <= N;j++)
        //     if(A[j] <= bi)
        //         sol ++;

        // mayor elemento menor o igual que bi
        int ini = 1, fin = N;
        while(ini < fin){
            int mit = (ini + fin + 1) / 2;

            // cout << ini << ' ' << fin << '\n';

            if(A[mit] <= bi){
                ini = mit;
            }
            else{ // A[mit] > bi
                fin = mit - 1;
            }
        }
        if(ini == 1 && A[ini] > bi)
            cout << 0;

        else
            cout << ini;

        if(i != M)
            cout << ' ';
    }
    cout << '\n';

    return 0;
}