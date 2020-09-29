#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int fun(vector<int> &arr, vector<int>::iterator begin, vector<int>::iterator end,int target,int tail,vector<int> sum, vector<int>::iterator les, vector<int>::iterator res,int s)
{
	int sz = end - begin;
	auto ip = upper_bound(begin, end, target / sz);
	if (ip == end)
		return tail;
	int summ = sum[s-(res-ip)] - sum[begin- les];
	if (ip == begin)
		if (target % sz > sz / 2) return target / sz + 1;
		else return target / sz;
	else return fun(arr, ip, end, target - summ, tail, sum, les, res,s);
}

int main()
{
	vector<int> arr{3,4,9 };
	int target = 10;
	sort(arr.begin(), arr.end());
	vector<int> sum(arr.size()+1);
	for (int i = 1; i < arr.size(); i++)
		sum[i] = arr[i-1] + sum[i - 1];
	int res = fun(arr, arr.begin(), arr.end(), target,arr[arr.size()-1],sum , arr.begin(), arr.end(),arr.size());
	cout << res << endl;	
}
