#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, q, maxValue = -1;
    cin >> n >> q;
    deque<int> nums(n,0);
    for(int i = 0; i < n; ++i){
        cin >> nums[i];
        maxValue = max(maxValue, nums[i]); // Max value calculation for the entire array
    }
    map<int,pair<int, int>> answer;
    int index =0;
    while(true){
        // cout << "que\n";
        int a = nums.front(); nums.pop_front();
        int b = nums.front(); nums.pop_front();
        if(a == maxValue){ // if A is max, the array will just cycle through b's from now on.
            nums.push_front(b); // [ b, x1, x2,x3, ...]
            nums.push_front(a); // [ a, b, x1, x2, x3, ...]
            break;
        }
        ++index;
        answer[index] = {a, b};
        if(b > a){
            swap(a,b);
        }
        nums.push_front(a);
        nums.push_back(b);
    }
    int residue[n];
    for(int i = 0; i < n; ++i){
        residue[i] = nums.front(); nums.pop_front();
    }
    for(int i = 0; i < q; ++i){
        ll qi;
        cin >> qi;
        if(qi <= index){
            cout << answer[qi].first << " " << answer[qi].second << '\n';
        }else{
            cout << maxValue << " " << residue[((qi - (index + 1))% (n-1)) + 1] << '\n';
        }
    }

}

void bruteForce(){
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
}

int main(){
    solve();
    return 0;
}