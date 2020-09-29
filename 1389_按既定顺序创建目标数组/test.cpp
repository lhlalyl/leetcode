#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
	vector<int> nums{ 4,2,4,3,2};
	vector<int> index{ 0,0,1,3,1 };
	multimap<int, int> res;
	vector<int> ans;
	for(int i=0;i<nums.size();i++)
		ans.insert(ans.begin()+index[i], nums[i]);
	
	for (auto c : ans)
		cout << c << " ";
	//while (it != res.end())
	//{
	//	cout << it->first << " " << it->second << endl;
	//	++it;
	//}
}