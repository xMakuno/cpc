#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string a;
    cin >> a;
    vector<int> v;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != '+'){
            v.push_back(a[i] - '0');
        }
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << "+\n"[i == v.size()-1];
    }
    return 0;
}