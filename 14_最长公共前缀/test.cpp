#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<string> data{ "flower","flow","flight" };
	string s;
	int sz = data[0].size();
	for (int i = 0; i < data.size(); i++)
		if (data[i].size() < sz)
			sz = data[i].size();
	for (int i = 0; i < sz; i++)
	{
		int flag = 1;
		for (int j = 1; j < data.size(); j++)
			if (data[j][i] != data[j - 1][i])
			{
				flag = 0;
				break;
			}
		if (flag)
			s.push_back(data[0][i]);
		else
			break;
	}
	cout << s;
}