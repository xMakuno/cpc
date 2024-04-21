#include<bits/stdc++.h>
using namespace std;

string op[3] = {"+","-","*"};
bool checkOp(string o){
    for(int i = 0; i < 3; ++i){
        if(op[i] == o) return true;
    }
    return false;
}

int parseOp(string o, int a, int b){
    if( o == "+") return a + b;
    else if( o == "-") return a - b;
    else if( o == "*") return a * b;
}

int main(){
    string temp, token, delimiter = " ";
    getline(cin, temp, '\n');
    size_t pos = 0;
    stack<int> nums;
    while((pos = temp.find(delimiter)) != temp.npos){
        token = temp.substr(0, pos);
        if(checkOp(token)){
            int a,b;
            a = nums.top(); nums.pop();
            b = nums.top(); nums.pop();
            nums.push(parseOp(token,a,b));
        }else{
            nums.push(stoi(token));
        }
        temp.erase(0, pos + delimiter.length());
    }
    cout << nums.top() << endl;
    return 0;
}