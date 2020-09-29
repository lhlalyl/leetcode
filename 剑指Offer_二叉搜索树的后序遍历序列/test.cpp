#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int equalFind(vector<int>::iterator begin, vector<int>::iterator end, int num)
{
	int sz = end - begin;
	auto l = 0, r = sz - 1;
	int flag = -1;
	int mid = (l + r) / 2;
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (num == begin[mid])
		{
			flag = mid;
			break;
		}
		else if (num < begin[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return flag;
}

bool verify(vector<int>::iterator begin1, vector<int>::iterator end1, vector<int>::iterator begin2, vector<int>::iterator end2)
{
	if (begin2 == end2)
		return true;
	int flag = lower_bound(begin1, end1, *(end2 - 1))- begin1;
	flag = flag == end1 - begin1 ? -1 : flag;
	if (flag == -1)
		return false;
	else
	{
		return verify(begin1, begin1 + flag, begin2, begin2 + flag) && verify(begin1 + flag + 1, end1, begin2 + flag, end2-1);
	}
}

int main()
{
	vector<int> mid{ 1,6,3,2,5 };
	vector<int> post(mid);
	sort(mid.begin(), mid.end());
	bool ans=verify(mid.begin(), mid.end(), post.begin(), post.end());
	vector<int>::iterator it = lower_bound(mid.begin(), mid.end(), 3);
	cout << it - mid.begin();
	
	

}