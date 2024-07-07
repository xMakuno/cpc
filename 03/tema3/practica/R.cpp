#include<bits/stdc++.h>
using namespace std;
int main(){
	priority_queue<int> nums;
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i){
		int temp;
		cin >>  temp;
		nums.push(temp);
	}
	nums.push(0);
	int last = 0, curr, count = 0, ans = 0;
	while(!nums.empty()){
		curr = nums.top(); nums.pop();

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
		last = curr;
	}

	cout << ans << '\n';
	return 0;
}
