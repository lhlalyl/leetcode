#pragma once

#include<vector>
#include<utility>

using std::vector;
using std::pair;
using std::cout;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
 
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return creatTree(nums.begin(), nums.end());
    }

    TreeNode* creatTree(vector<int>::iterator begin, vector<int>::iterator end)
    {
        if (begin == end)
            return nullptr;
        TreeNode* root = new TreeNode(0);
       
        int res = *begin;
        int Index = 0;
        for (int i = 1; i < end - begin; i++)
            if (begin[i] > res)
            {
                res = begin[i];
                Index = i;
            }

        root->val = res;
        root->left = creatTree(begin, begin + Index);
        root->right = creatTree(begin + Index + 1, end);
        return root;
    }

    pair<int, int> max(vector<int>::iterator beg, vector<int>::iterator end)
    {
        int res = *beg;
        int Index = 0;
        for(int i = 1;i<end-beg;i++)
            if (beg[i] > res)
            {
                res = beg[i];
                Index = i;
            }
        return{ res,Index };
    }

    void pre(TreeNode* root)
    {
        if (root != nullptr)
        {
            cout << root->val << " ";
            pre(root->left);
            pre(root->right);
        }
    }
};