#pragma once

#include<vector>

using std::vector;

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans(num + 1);
        ans[0] = 0;
        for (int i = 1; i <= num; i++)
        {
            if (i % 2)
                ans[i] = ans[i - 1] + 1;
            else
                ans[i] = ans[i / 2];
        }
        return ans;
    }
};