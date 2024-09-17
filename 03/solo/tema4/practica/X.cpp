#include<iostream>
using namespace std;

long long bin_pow(long long a, long long b, long long m){
    if(b == 0)
        return 1;
    if(b % 2)
        return bin_pow(a, b-1, m) * a % m;
    long long res = bin_pow(a, b/2, m); 
    return res * res % m;
}
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int a, b;
        cin >> a >> b;
        cout << bin_pow(a,b,10) << endl;
    }
    return 0;
}