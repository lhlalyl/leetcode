#pragma once

#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<set>

using std::vector;
using std::unordered_map;
using std::unordered_set;
using std::set;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> lst;
        for (int i = 0; i < nums.size(); i++)
            lst.insert(nums[i]);
        vector<int> B;
        for (auto it = lst.begin(); it != lst.end(); it++)
            B.push_back(*it);
        if (B.size() <= 1)
            return B.size();
        int largest = 1;
        int flag = 1;
        for (int i = 1; i < B.size(); i++)
        {
            if ((B[i] - B[i-1]) != 1)
                flag = 1;
            else
            {
                flag++;
                if(flag>largest)
                    largest = flag;
            }
        }
        return largest;
    }

};