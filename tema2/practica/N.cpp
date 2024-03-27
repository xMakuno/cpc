#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(n) for(int i=0;i<n;i++)
#define foi(m,n) for(int i=m;i<n;i++)
#define foj(m,n) for(int j=m;j<n;j++)
#define rev(n) for(int i=n-1;i>=0;i--)
#define revj(n) for(int j=n-1;j>=0;j--)
#define mp make_pair
#define fi first
#define sec second
#define all(v) v.begin(),v.end()
#define pb push_back
#define endl '\n'
#define printa(v) for(auto x: v) { cout << x << " ";}

// WA 16/27 test cases (even though i think is the same algorithm compared to this code's counterpart in python)
signed main(){
    unordered_map<int,vector<int>> memo;
    int n, x, t;
    cin >> n >> x;
    int half = x/2;
    bool answered = false;
    fo(n){
        cin >> t;
        //cout << i << " " << t << endl;
        if(memo.count(x-t) == 1) { memo.emplace(t, vector<int>(1,i+1)); }
        else { memo[t].pb(i+1); }
        if(half == t && t & 1 == 0){
            if(memo[t].size() > 1){
                foj(0,memo[t].size()){
                    cout << memo[t][j] << " \n"[j == memo[t].size() - 1];
                }
                answered = true;
                break;
            }
        }else{ 
            if(memo.count(x-t) == 1){
                cout << memo[x-t].front() << " " << i + 1 << "\n";
                answered = true;
                break;
            }
            
        }
    }

    if(!answered){
        cout << "IMPOSSIBLE" << '\n';
    }
    return 0;
}