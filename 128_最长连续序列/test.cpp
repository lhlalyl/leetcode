#include<iostream>
#include"A.h"

int main()
{
	Solution s;
	//vector<int> A{ 100, 4, 200, 1, 3, 2,6,5,4 };
	vector<int> A{ 9,1,4,7,3,-1,0,5,8,-1,6 };
	
	std::cout << s.longestConsecutive(A);
}