#include<bits/stdc++.h>
using namespace std;
int main(){
	priority_queue<int> nums;
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i){
		int temp;
		cin >>  temp;
		nums.push(-temp);
	}
	int last = 0, curr = 1, count = 0, ans = 0;
	while(!nums.empty()){
		curr = nums.top();
		nums.pop();
		cout << "\nLast: " << last;
		if(last != curr){
			if(count < last){
				ans += count;
			}else if(count > last){
				ans += count - last;
			}
			count = 1;
		}else{
			count++;
		}

	}
	cout << ans << '\n';
	return 0;
}
