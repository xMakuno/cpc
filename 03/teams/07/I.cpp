#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    set<int> v;
    for(int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        // cout << temp << '\n';
        v.insert(temp);
    }
    /* for(auto x: v){
        cout << x << " ";
    }
    cout << endl; */
    auto it = v.begin();
    int longest = 0, curr = 1, last = *it;
    for(it; it != v.end(); ++it){
        if(last + 1 == (*it)){
            curr++;
            last = *it;
        }else{
            longest = max(longest,curr);
            curr = 1;
            last = *it;
        }
    }
    if(*(it--) == *(v.end())){
        longest = max(longest,curr);
    }
    //validar que siga la chain en el fokin final
    cout << longest << '\n';
    return 0;
}