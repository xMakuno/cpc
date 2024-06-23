#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
    int r, y, k;
    if(a==c || b ==d){
        r = 1;	
    }else{
        r = 2;
    }
    //Bishop
    if((i_white||!f_white)&&(!i_white||f_white)){
        if((a-b == c-d) || (b+a == d+c)){
            y = 1;
        }else{
            y = 2;
        }
    }else{
        y = 0;
    }

    k = max(abs(a-c),abs(b-d));
    cout << r << " " << y << " " << k << endl;
    return 0;
}
