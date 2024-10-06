#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    int a, b, c, d;
    d = n % 10; // This 100% is needed
    n /= 10;
    c = n % 10;
    n /= 10;
    b = n % 10;
    n /= 10;
    a = n;
    if(a + b + c + d == 100){
        cout << "Perfect: " << a << '\n';
        cout << "Great: " << b << '\n';
        cout << "Good: " << c << '\n';
        cout << "Bad: " << d << '\n';
    }else{
        cout << "NO SOLUTION\n";
    }
    return 0;
}