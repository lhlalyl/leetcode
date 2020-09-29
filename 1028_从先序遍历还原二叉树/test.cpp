#include<iostream>

#include"test.h"

using namespace std;

int main()
{
	Solution res;
	string s{ "1-401--349---90--88" };

	TreeNode *root= res.recoverFromPreorder(s);
	res.pre(root);

	
}