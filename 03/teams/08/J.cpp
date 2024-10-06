#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    if(T < 49){
        cout << "TOO COLD\n";
    }else if( T > 60){
        cout << "TOO HOT\n";
    }else{
        cout << "ACCEPTED\n";
    }
    return 0;
}