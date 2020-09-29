#pragma once

#include<string>
#include<vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    TreeNode* recoverFromPreorder(string s) {
		int nums1 = 0;
		int nums2 = 1;
		vector<vector<int>> node;
		vector<int> node1;
		vector<int> node2;
		node2.push_back(1);
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != '-')
				nums1 = nums1 * 10 + s[i] - 48;
			else if (s[i + 1] != '-')
			{
				node1.push_back(nums1);
				nums1 = 0;
			}
			if (i == s.size() - 1)
				node1.push_back(nums1);
			if (i > 0)
			{
				if (s[i] == '-')
					nums2++;
				else if (s[i - 1] == '-')
				{
					node2.push_back(nums2);
					nums2 = 1;
				}
			}
		}
		for (int i = 0; i < node1.size(); i++)
			node.push_back({ node1[i],node2[i] });
		return creatTree(node.begin(), node.end());
    }

    TreeNode* creatTree(vector<vector<int>>::iterator begin, vector<vector<int>>::iterator end)
    {
		if (begin == end)
			return nullptr;
		TreeNode* root = new TreeNode(0);
		root->val = begin->begin()[0];
		int Index = begin->begin()[1];

		vector<int> data;
		auto it = begin + 1;
		int count = 0;
		while (it != end)
		{
			count++;
			if (it->begin()[1] == Index + 1)
				data.push_back(count);
			++it;
		}
		if (data.size() == 1)
			root->left = creatTree(begin + data[0], end);
		if (data.size() == 2)
		{
			root->left = creatTree(begin + data[0], begin + data[1]);
			root->right = creatTree(begin + data[1], end);
		}
		return root;
    }

	void pre(TreeNode* root)
	{
		if (root != nullptr)
		{
			pre(root->left);
			cout << root->val << " ";
			pre(root->right);
		}
	}
};