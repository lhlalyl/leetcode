#pragma once

#include<queue>

using std::queue;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;
        queue<TreeNode*> que;
        que.push(root);
        int ans = 1;
        while (!que.empty())
        {
            TreeNode* p = que.front();
            que.pop();
            if (p->left)
                que.push(p->left);
            if (p->right)
                que.push(p->right);
            if (p->left || p->right)
                ++ans;
        }
        return ans;
    }
};