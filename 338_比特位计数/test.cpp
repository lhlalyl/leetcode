#include<iostream>
#include"test.h"

using namespace std;

int main()
{
	Solution s;
	int da;
	cin >> da;
	vector<int> ans=s.countBits(da);
	for (auto c : ans)
		cout << c << " ";
}