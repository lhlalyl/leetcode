#include<iostream>
#include<unordered_set>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string s{ "pwwkew" };

	unordered_set<char> ch;
	int n = s.size();
	int rk = -1;
	int ans = 1;
	for (int i = 0; i < n; i++)
	{
		if (i)
			ch.erase(s[i-1]);
		while (rk<n-1 && !ch.count(s[rk+1]))
		{
			ch.insert(s[rk + 1]);
			rk++;
		}
		ans = max(ans, rk - i + 1);
	}
	cout << ans;
}
