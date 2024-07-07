#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct node{
    ll partialSum = 0;
    ll remainingAmount;
    ll originalValue;
    node(ll a, ll b, ll c){
        partialSum = a;
        remainingAmount = b;
        originalValue = c;
    }
};

int main(){
    ll Q, X, C, cI = 0;
    vector<node> vec;
    cin >> Q;
    for(ll i = 0; i < Q; ++i){
        cin >> C;
        if(C == 1){
            cin >> X >> C;
            vec.push_back(node(C * X, C, X));
        }
        else{
            cin >> C;
            ll sum = 0;
            bool cont = true;
            while(cont){
                node a = vec.at(cI);
                if(a.remainingAmount <= C){
                    sum += a.partialSum;
                    C -= a.remainingAmount;
                    ++cI;
                }
                else{
                    a.remainingAmount -= C;
                    a.partialSum -= (a.originalValue * C);
                    sum += a.originalValue * C;
                    vec.at(cI) = a;
                    C = 0;
                }
                if(C == 0 || cI == vec.size()){
                    cont = false;
                }
            }
            cout << sum << "\n";
        }
    }
    return 0;
}