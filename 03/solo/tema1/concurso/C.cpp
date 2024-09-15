#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(true){
        cin >> n;
        if(n == 0){
            break;
        }
        deque<int> dq;
        for(int i = 1; i <= n; ++i){
            dq.push_back(i);
        }
        cout << "Discarded cards: ";
        int dc, mc;
        while(dq.size() > 1){
            dc = dq.front(); dq.pop_front();
            mc = dq.front(); dq.pop_front(); dq.push_back(mc);
            if(dq.size() == 1){
                cout << dc;
            }else{
                cout << dc << ", ";
            }
        }
        cout << "\nRemaining card: " << dq.front() << '\n';
    }
    return 0;
}