#include<iostream>
#include<vector>
#include<string>
#include<set>

using namespace std;

bool midword(string s1, string s2)
{
	int flag = 0;
	for (int i = 0; i < s1.size(); i++)
		if (s1[i] != s2[i])
			flag++;
	if (flag == 1)
		return true;
	else
		return false;
}

int main()
{
	vector<vector<string>> res;
	string A{ "ab" };
	string B{ "hm" };
	vector<string> lst{"ab","cd","ai","hi","hc","lm","np","hm"};
	int flag = 0;
	int flag_A = -1;
	int flag_B = -1;
	for (int i = 0; i < lst.size(); i++)
	{
		if (lst[i] == B)
		{
			flag = 1;
			flag_B = i;
		}
		if (lst[i] == A)
			flag_A = i;
	}
	if (flag)
	{
		set<int> lst1;
		int TreeSize = 1;
		vector<vector<int>> tri;
		vector<vector<int>> tri1;
		vector<int> tree;
		for (int i = 0; i < lst.size(); i++)
			if (midword(lst[i], A) && !lst1.count(i) && (i != flag_A))
			{
				tree.push_back(i);
				lst1.insert(i);
			}
		for (int k = 0; k < tree.size(); k++)
		{
			tri1.push_back({});
			tri1[k].push_back(tree[k]);
		}
		tri = tri1;
		tri1.clear();

		
		while ((lst1.size() != lst.size() && !tree.empty()) && !lst1.count(flag_B))
		{
			vector<int> tree1;
			set<int> lst2(lst1);
			int numtree = 0;
			for (int j = 0; j < tree.size(); j++)
			{
				int sum = 0;
				int midnumtree = tree1.size();
				for (int i = 0; i < lst.size(); i++)
					if (midword(lst[i], lst[tree[j]]) && !lst2.count(i) && (i != flag_A))
					{
						tree1.push_back(i);
						lst1.insert(i);
					}
				numtree = tree1.size() - midnumtree;
				for (int k = 0; k < numtree; k++)
				{
					tri1.push_back(tri[j]);
					tri1[tree1.size() - numtree + k].push_back(tree1[tree1.size() - numtree + k]);
				}
			}
			tri = tri1;
			tri1.clear();
			tree = tree1;
		}
		for (int i = 0; i < tri.size(); i++)
		{
			res.push_back({ A });
			for (int j = 0; j < tri[i].size(); j++)
			{
				res[i].push_back(lst[tri[i][j]]);
			}
		}
		vector<vector<string>> res1;
		for (int i = 0; i < res.size(); i++)
		{
			
			if (res[i][res[i].size() - 1] == B)
			{
				res1.push_back(res[i]);
			}
		}

		for (int i = 0; i < res1.size(); i++)
		{
			for (int j = 0; j < res1[i].size(); j++)
				cout << res1[i][j] << " ";
			cout << endl;
		}
	}
}