#include<iostream>
#include<vector>

using namespace std;

bool even(int a)
{
	int i = 0;
	if (a == 0)
		return false;
	while (a)
	{
		i++;
		a = a / 10;
	}
	return i % 2 ? false : true;
}

int main()
{
	vector<int> nums{ 12,345,2,6,7896 };
	int a = 0;
	for (int i = 0; i < nums.size(); i++)
		if ((nums[i]>9 && nums[i] <100) || (nums[i] > 999 && nums[i] < 10000) || (nums[i] > 99999 && nums[i] < 1000000) || (nums[i] > 9999999 && nums[i] < 100000000) || nums[i] > 9999999999)
			a++;
	cout << a;
}