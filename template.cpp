#include<bits/stdc++.h>
using namespace std;
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
#define pf push_front
#define pob pop_back
#define pof pop_front
#define endl '\n'
#define printArr(v,n) for(int i = 0; i < n; ++i) { cout << x << " \n"[i==n-1];}
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define newL cout << '\n';
#define vi vector<int>
#define vll vector<ll>
#define vii vector<pair<int,int>>
#define v(x) vector<x>

// Bitwise operations
#define TEST(a, b) ((a) & (1LL << (b)))
#define SET(a, b) ((a) | (1LL << (b)))
#define CLEAR(a, b) ((a) & ~(1LL << (b)))
#define FLIP(a, b) ((a) ^ (1LL << (b)))
#define EP2(n) (n == (n&-n))
// safe double operations and etc. Stole it from my buddy @arctan
int isqrt(int n) {
    int lo = 0, hi = n;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (mid * mid <= n) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return lo - 1;
}

long long div_ceil(long long a, long long b) {
    return (b >= 0 ? (a + b - 1) : a) / b;
}

typedef long long ll;

signed main(){
    return 0;
}