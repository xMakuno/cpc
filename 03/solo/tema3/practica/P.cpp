#include<bits/stdc++.h>
using namespace std;

int main(){
    string action;
    priority_queue<int> pq;
    while(cin >> action && action != "end"){
        
        if(action == "insert"){
            int temp;
            cin >> temp;
            pq.push(temp);
        }else{
            int out;
            out = pq.top(); pq.pop();
            cout << out << '\n';
        }
    }
    return 0;
}