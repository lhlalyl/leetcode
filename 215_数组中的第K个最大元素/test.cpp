#include<iostream>
#include"test.h"

using namespace std;

int main()
{
	Solution s;
	vector<int> nums{ 3,2,1,5,6,4 };
	cout << s.findKthLargest(nums, 2) << endl;
	for (int c : nums)
		cout << c << " ";
}