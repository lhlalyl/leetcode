#include<iostream>
#include<vector>
#include<string>
#include<map>

using namespace std;

int main()
{
	string A{ "this apple is sweet" };
	string B{ "this apple is sour" };
	string str = " " + A + " " + B;
	vector<string> sb;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
			sb.push_back("");
		else
			sb[sb.size() - 1].push_back(str[i]);
	}

	map<string, int> table;
	for (int i = 0; i < sb.size(); i++)
	{
		if (table.count(sb[i]))
		{
			++table[sb[i]];
		}
		else
			table.insert({ sb[i],1});
	}
	vector<string> res;
	auto it = table.begin();
	while (it != table.end())
	{
		if ((*it).second == 1)
			res.push_back((*it).first);
		++it;
	}
	for (auto c : res)
		cout << c << " ";

}