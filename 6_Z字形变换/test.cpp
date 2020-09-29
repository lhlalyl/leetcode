#include<iostream>

#include"Solution.h"

int main()
{
	Solution s;
	//string ss = "LEETCODEISHIRING";
	string ss = "AB";
	std::cout << s.convert(ss, 1) << std::endl;
	std::cout << s.convert(ss, 1).size() << " " << ss.size() << std::endl;
}