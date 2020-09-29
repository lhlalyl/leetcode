#pragma once

#include<vector>
#include<queue>

using namespace std;
using std::priority_queue;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
		struct Node
		{
			int val, x, y;
			Node(int val,int x,int y):val(val),x(x),y(y){}
			bool operator>(const Node& that) const
			{
				return this->val > that.val;
			}
		};

		priority_queue<Node, vector<Node>, greater<Node>> que;

		int n = matrix.size();
		for (int i = 0; i < n; i++)
			que.emplace(matrix[i][0], i, 0);
		for (int i = 0; i < k - 1; i++)
		{
			Node p = que.top();
			que.pop();
			if (p.y != n - 1)
				que.emplace(matrix[p.x][p.y + 1], p.x, p.y + 1);
		}
		return que.top().val;
    }
};
