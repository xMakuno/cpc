#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    vector<vector<int>> digits(10);
    for(int i = 2; i < 10; ++i){
        // cout << i << endl;
        digits[i].push_back(i);
    }
    for(int i = 2; i < 10; ++i){
        // cout << "====[" << i << "]====\n";
        for(int j = 2; i < 10; ++j){
            int last_digit = pow(i,j);
            last_digit %= 10;
            // cout << last_digit << "\n";
            if(digits[i][0] == last_digit){
                break;
            }else{
                digits[i].push_back(last_digit);
            }
        }
    }

    int T = 1;
    cin >> T;
    while(T--){
        int a, b;
        cin >> a >> b;
        a %=10;
        if(a == 1 || a == 0 || a == 5 || a == 6){
            cout << a << '\n';
            continue;
        }else{
            int index = (b %  digits[a].size());
            if(index != 0){
                index--;
            }
            cout << digits[a][index] << endl;
        }

    }
    return 0;
}