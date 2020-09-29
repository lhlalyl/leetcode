#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main() {
//	vector<int> nums{ -2,1,-3,4,-1,2,1,-5,-4 };
//	int sz = nums.size();
//	vector<int> dp(sz);
//	dp[0] = nums[0];
//	for (int i = 1; i < sz; i++) {
//		dp[i] = dp[i - 1] + nums[i] > nums[i] ? dp[i - 1] + nums[i] : nums[i];
//	}
//	int res = dp[0];
//	for (int i = 1; i < sz; i++)
//		if (dp[i] > res)
//			res = dp[i];

	int a = 1, b = 6;
	string s = "0.";
	vector<int> res;
	unordered_map<int,int> mp;
	int flag = a % b;
	while (flag && !mp.count(flag)) {
		mp[flag] = res.size();
		while (a < b)
			a *= 10;
		flag = a % b;
		res.push_back(a / b);
		a = flag;
	}

	for (int i = 0; i < res.size(); i++) {
		if (flag && mp[flag] == i) {
			s.push_back('(');
		}
		s.push_back(res[i]+'0');
	}
	if(flag)
		s.push_back(')');
	cout << s << endl;
}

