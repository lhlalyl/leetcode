#include<iostream>
#include<vector>

using namespace std;

//string longestPalindrome(string s) 
//{
//	int sz = s.size();
//	vector<vector<bool>> dp(sz,vector<bool>(sz));
//	dp[0][0] = true;
//	int lenght = 1;
//	for (int i = 1; i < sz; i++)
//	{
//		dp[i][i] = true;
//		for (int j = 0; j < i; j++)
//		{
//			dp[j][i] = s[i] == s[j] && (j - i <= 1 || dp[i + 1][j - 1]);
//			if (dp[i][j] && j - i > lenght)
//				lenght = j - i;
//		}
//	}
//	return lenght;
//
//}

int main()
{
	string s = "a";
	int sz = s.size();
	vector<vector<bool>> dp(sz, vector<bool>(sz));
	string ans = s.substr(0, 1);
	dp[0][0] = true;
	int lenght = 1;
	for (int i = 1; i < sz; i++)
	{
		dp[i][i] = true;
		for (int j = 0; j < i; j++)
		{
			dp[j][i] = s[i] == s[j] && ((i-j) ==1 || dp[j + 1][i - 1]);
			if (dp[j][i] && i-j+1 > lenght)
			{
				lenght = i - j + 1;
				ans = s.substr(j, i - j + 1);
			}
		}
	}
	cout << lenght;
	cout << ans;
}