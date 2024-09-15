#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    mp.insert({0,1});
    for(int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        if(mp.count(temp)>0){
            mp[temp]++;
        }else{
            mp.insert({temp, 1});
        }
    }
    for(int i = 0; i < m; ++i){
        int cus;
        cin >> cus;
        auto it = mp.upper_bound(cus);
        it--;
        // cout << (*it).first << '\n';
        if(it == mp.end() || (*it).second < 1 || (*it).first == 0){
            cout << "-1\n";
        }else{
            cout << (*it).first << '\n';
            if((*it).second == 1){
                mp.erase(it);
            }else{
                (*it).second--;
            }           
        }
    }
    return 0;
}
