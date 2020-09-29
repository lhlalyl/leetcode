#pragma once

#include<string>
#include<vector>

using std::string;
using std::vector;

class Solution {
public:
    string convert(string s, int numRows) {
        if (s==" " || s.empty())
            return s;
        else
        {
            int len = s.size();
            string res;
            int flag = len / (2 * numRows - 2) + 1;
            vector<vector<int>> arry(numRows);
            for (int i = 0; i < flag; i++)
            {
                arry[0].push_back((2 * numRows - 2) * i + 1);
                arry[numRows - 1].push_back((2 * numRows - 2) * i + numRows);
            }
            for (int i = 1; i < numRows - 1; i++)
            {
                for (int j = 0; j < arry[0].size(); j++)
                {
                    arry[i].push_back(arry[0][j] + i);
                    arry[i].push_back(arry[0][j] + (2 * numRows - 2 - 2 * i) + i);
                }
                if (arry[i][j] >= 1 && arry[i][j] <= len)
                    res.push_back(s[arry[i][j] - 1]);
            }
            for (int i = 0; i < arry.size(); i++)
                for (int j = 0; j < arry[i].size(); j++)
                    if (arry[i][j] >= 1 && arry[i][j] <= len)
                        res.push_back(s[arry[i][j] - 1]);
            return res;

        }
    }
};