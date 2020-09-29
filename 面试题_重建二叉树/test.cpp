#include<iostream>
#include"Solution.h"

using namespace std;

int main()
{
	Solution s;
	vector<int> preorder{ 1,2,4,8,5,3,6,9,7 };
	vector<int> inorder{ 8,4,2,5,1,6,9,3,7 };
	TreeNode* root = s.buildTree(preorder, inorder);

	//vector<int> s{ 1,2,3,4,5 };
	//auto p = s.begin() + 4;
	//if (p == s.end())
	//	cout << "dsa";
	//cout << p[0];
}