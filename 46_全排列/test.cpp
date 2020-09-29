#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;
vector<vector<int>> res;

void print(vector<int>& A) {
	for (auto c : A)
		cout << c << " ";
	cout << endl;
}

void permute(vector<int>& nums,int begin,int end)
{
	if (begin == end)
		res.emplace_back(nums);
	unordered_set<int> st;
	for (int i = begin; i <= end; i++)
	{
		if (st.count(nums[i]))
			continue;
		st.insert(nums[i]);
		swap(nums[i], nums[begin]);
		//cout << "递归前数据：";
		//print(nums);
		permute(nums, begin + 1, end);
		//cout << "递归后数据：";
		//print(nums);
		swap(nums[i], nums[begin]);
	}
}

vector<string> ans;

void kuohao(int l,int r,string s) {
	if (l == 0 && r == 0)
		ans.push_back(s);
	if (l != 0)
		kuohao(l - 1, r, s + "(");
	if (l < r)
		kuohao(l, r - 1, s + ")");
}

int main()
{
	vector<int> nums{ 1,1,2 };
	//sort(nums.begin(), nums.end());
	//vector<vector<int>> res;
	//res.push_back(nums);
	//while (next_permutation(nums.begin(), nums.end()))
	//{
	//	res.push_back(nums);
	//}
	permute(nums, 0, 2);
	//kuohao(3, 3, "");
	//for (auto c : ans)
	//	cout << c << endl;
	for (auto& c : res)
	{
		for (auto d : c)
			cout << d << " ";
		cout << endl;
	}
}