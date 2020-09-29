#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> A{ 2,2,2,2,1 }, B{ 2,1,2,1,2 };
	int m = A.size(), n = B.size();
	vector<vector<int>> dp(m + 1, vector<int>(n + 1));
	for (int i = 1; i < m + 1; i++)
		for (int j = 1; j < n + 1; j++)
			if (A[i-1] == B[j-1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
	for (auto& a : dp)
	{
		for (auto b : a)
			cout << b << " ";
		cout << endl;
	}
}
