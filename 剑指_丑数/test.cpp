#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//int min(int a, int b, int c)
//{
//	int temp = a;
//	if (b < temp)
//		temp = b;
//	else if (c < temp)
//		temp = c;
//	return temp;
//}

int main()
{
	int n = 16;
	int a = 0, b = 0, c = 0;
	vector<int> dp;
	dp.push_back(1);
	for (int i = 1; i < n; i++)
	{
		dp.push_back(min(min(2 * dp[a], 3 * dp[b]), 5 * dp[c]));
		if (dp[i] == 2 * dp[a])
			++a;
		if (dp[i] == 3 * dp[b])
			++b;
		if (dp[i] == 5 * dp[c])
			++c;
	}

	for (int c : dp)
		cout << c << " ";
}