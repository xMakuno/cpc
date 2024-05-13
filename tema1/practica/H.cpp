#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    deque<int> nums(n,0);
    // vector<int> queries(q,0);
    for(int i = 0; i < n; ++i){
        cin >> nums[i];
        // cout << nums[i] << " \n"[i == n - 1];
    }
    int m, a, b;
    for(int i = 0; i < q; ++i){
        cin >> m;
        deque<int> temp(nums);
        for(int j = 0; j < m; ++j){
            a = temp.front(); temp.pop_front();
            b = temp.front(); temp.pop_front();
            cout << "m: " << m << " a: " << a << " b: " << b << '\n';
            if(a > b){
                temp.push_front(a);
                temp.push_back(b);
            }else{
                temp.push_front(b);
                temp.push_back(a);
            }
        }
        cout << a << " " << b << '\n';
    }

    return 0;
}