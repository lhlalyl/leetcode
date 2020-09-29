#pragma once

#include<vector>
#include<queue>
#include<algorithm>

using namespace std;


class Solution {
public:
    bool canJump(vector<int>& nums) {
        int sz = nums.size();
        int mx = 0;
        for (int i = 0; i < sz; i++)
        {
            if (i <= mx)
                mx = max(nums[i] + i, mx);
            if (mx > sz - 1)
                return true;
        }
        return false;
    }
};

//class Solution {
//    vector<bool> marked;
//public:
//    bool canJump(vector<int>& nums) {
//        for (int i = 0; i < nums.size(); i++)
//            marked.push_back(false);
//        dfs(0, nums);
//        return marked[nums.size() - 1];
//
//    }
//    void dfs(int v, vector<int>& nums)
//    {
//        int sz = nums.size();
//        marked[v] = true;
//        if (!marked[nums.size() - 1])
//            for (int i = nums[min(v, sz - 1)]; i > 0; i--)
//                if (!marked[v + i])
//                    dfs(v + i, nums);
//    }
//};


//class Solution {
//public:
//    bool canJump(vector<int>& nums) {
//        int sz = nums.size();
//        vector<bool> marked(sz);
//        queue<int> pq;
//        pq.push(0);
//        while (!pq.empty() && !marked[sz - 1])
//        {
//            int v = pq.front();
//            marked[v] = true;
//            pq.pop();
//            for (int i = nums[min(v,sz-1)]; i>0; i--)
//                if (!marked[v + i])
//                {
//                    marked[v + i] = true;
//                    pq.push(v + i);
//                }
//        }
//        return marked[nums.size() - 1];
//    }
//};