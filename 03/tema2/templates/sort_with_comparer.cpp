#include<bits/stdc++.h>

using namespace std;

struct dragon{
    int str,bon;
};

bool cmp(dragon a,dragon b){
    if(a.str < b.str)
        return true;
    return false;
}

int main(){

    // freopen("test","r",stdin);
    // freopen("output","w",stdout);

    int S,N;
    cin >> S >> N;

    dragon A[N];

    for(int i = 0;i < N;i++){
        cin >> A[i].str >> A[i].bon;
    }

    sort(A, A + N,cmp);

    // for(int i = 0;i < N;i++){
    //     cout << A[i].str << ' ' << A[i].bon << '\n';
    // }

    for(int i = 0; i < N;i++){
        if(A[i].str >= S){
            cout << "NO\n";
            return 0;
        }

        S += A[i].bon;
    }

    cout << "YES\n";
}