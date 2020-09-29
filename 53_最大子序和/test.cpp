#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> nums{ -2,1,-3,4,-1,2,1,-5,4 };
	vector<int> dp(nums.size());
	dp[0] = nums[0];
	for (int i = 1; i < nums.size(); i++)
		dp[i] = max(dp[i - 1] + nums[i], nums[i]);
	int ans = dp[0];
	for (int i = 1; i < nums.size(); i++)
		if (dp[i] > ans)
			ans = dp[i];
	cout << ans;
}