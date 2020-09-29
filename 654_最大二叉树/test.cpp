#include<iostream>
#include"test.h"

using namespace std;

int main()
{
	vector<int> nums{ 3,2,1,6,0,5 };
	Solution s;
	TreeNode* root = s.creatTree(nums.begin(), nums.end());
	cout<<root->val;
	s.pre(root);
	//cout << --nums.end() - nums.begin();
}