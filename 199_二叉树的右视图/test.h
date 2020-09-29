#pragma once

#include<vector>
#include<queue>

using std::vector;
using std::queue;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr)
            return ans;
        queue<TreeNode*> que1;
        queue<TreeNode*> que2;
        que1.push(root);
        ans.push_back(root->val);
        while (!que1.empty() || !que2.empty())
        {
            while (!que1.empty())
            {
                TreeNode* p = que1.front();
                que1.pop();
                if (p->left)
                    que2.push(p->left);
                if (p->right)
                    que2.push(p->right);
            }
            ans.push_back(que2.back()->val);
            while (!que2.empty())
            {
                TreeNode* p = que2.front();
                que2.pop();
                if (p->left)
                    que1.push(p->left);
                if (p->right)
                    que1.push(p->right);
            }
            ans.push_back(que1.back()->val);
        }
        return ans;
    }
};