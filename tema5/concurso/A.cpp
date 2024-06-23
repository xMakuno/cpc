#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
    cin >> T;
    while(T--){
        long long M;
        cin >> M;
        long double ans = 1 + sqrt(1 + 8*M);
        ans /=2;
        cout << ceil(ans) << endl;
    }
	return 0;
}
