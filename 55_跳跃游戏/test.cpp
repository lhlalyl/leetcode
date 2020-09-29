#include<iostream>
#include"test.h"


int main()
{
	vector<int> nums{ 5,4,3,2,1,1,0,0 };
	Solution s;
	cout<<s.canJump(nums);
}