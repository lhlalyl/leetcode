#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main()
{
	vector<int> coins{ 1,2,5 };
	int amount = 5;
	vector<int> dp(amount + 1,0);
	dp[0] = 1;

	for (int coin : coins) {
		for (int x = coin; x < amount + 1; ++x) {
			dp[x] += dp[x - coin];
		}
	}


	//sort(coins.begin(), coins.end());

	//vector<int> dp(amount+1, 0);
	//for (int i = 1; i <= amount; i++)
	//{
	//	int con = INT_MAX;
	//	for (int j = 0; j < coins.size(); j++)
	//		if (i - coins[j] >= 0)
	//			con = min(con, dp[i - coins[j]] + 1);
	//	dp[i] = con;
	//}

	for (int c : dp)
		cout << c << " ";
}