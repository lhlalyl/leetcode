#pragma once

#include<vector>
#include<string>
#include<set>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::multiset;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       return build(preorder.begin(), inorder.begin(),preorder.size(),"root");
    }

    TreeNode* build(vector<int>::iterator preorder, vector<int>::iterator inorder,int length,string s) {
        if (length==0)
            return nullptr;
        TreeNode* root = new TreeNode(0);
        root->val = *preorder;
        int rootIndex = 0;
        for (; rootIndex < length; rootIndex++)
            if (inorder[rootIndex] == *preorder)
                break;
        cout << "正在执行" << s << "分支" << " ";
        cout << rootIndex << " " << rootIndex << " " << length - rootIndex - 1 << endl;
        cout << length << endl;
        cout << "preorder:" << *preorder << endl;
        cout << "inorder:" << *inorder << endl;
        root->left = build(preorder + 1, inorder, rootIndex, "left");
        root->right = build(preorder + rootIndex + 1, inorder + rootIndex + 1, length - rootIndex - 1, "right");
        return root;
    }
};