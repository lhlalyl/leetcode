#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<vector<int>> intervals{ {1,4},{4,5} };
	sort(intervals.begin(), intervals.end(), [](const vector<int> a, const vector<int> b)
	{
		//if (a[0] != b[0])
			return a[0] < b[0];
	/*	else
			return a[1] < b[1];*/
	});
	vector<vector<int>> ans;
	//if (intervals.size() == 0)
	//	return ans;
	ans.push_back(intervals[0]);
	for (int i = 1; i < intervals.size(); i++)
	{
		int sz = ans.size() - 1;
		if (ans[sz][1] < intervals[i][0])
			ans.push_back(intervals[i]);
		else
			ans[sz][1] = max(ans[sz][1], intervals[i][1]);
	}

	for (auto& c : ans)
	{
		for (auto d : c)
			cout << d << " ";
		cout << endl;
	}

}