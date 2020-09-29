#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> ans;

void help(int l, int r, string a) {
	if (l == 0 && r == 0) {
		ans.push_back(a);
	}
	if (l != 0) help(l - 1, r, a + '(');
	if (l < r) help(l, r - 1, a + ')');
}

int main()
{
	int n = 3;
	help(n, n, "");
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << endl;
	/*int sz = n;
	if (n > 2)
	{
		sz = 1;
		for (int i = 1; i < n; i++)
			sz *= i;
		sz += 2;
	}
	cout << sz << endl;
	vector<string> res(sz);
	string str1 = "()";
	string str2 = ")(";*/
}