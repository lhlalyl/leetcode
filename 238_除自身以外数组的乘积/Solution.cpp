#include "Solution.h"

vector<int> Solution::productExceptSelf(vector<int>& nums)
{
	vector<int> B(nums.size(),1);
	int flag = 1;
	for (int i = 1; i < nums.size(); i++)
	{
		B[i] = B[i - 1] * nums[i - 1];
	}
	for (int i = nums.size()-1; i >=0; i--)
	{
		B[i] = B[i] * flag;
		flag *= nums[i];
	}
	return B;
}