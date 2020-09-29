#include<iostream>

#include"Solution.h"

int main()
{
	int a;
	vector<int> A;
	while (std::cin >> a)
		A.push_back(a);
	Solution s;
	vector<int>	B = s.productExceptSelf(A);
	for (auto c : B)
		std::cout << c << " ";
}