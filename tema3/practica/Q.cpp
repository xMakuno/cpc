#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    set<int> s;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    cout <<  s.size() << endl;
    return 0;
}