#pragma once

#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int primePalindrome(int N) {
        if (N == 1)
            return 2;
        while (N < 200000000) {
            if (isHuiwen(N) && isSushu(N))
                break;
            else
                N = N + N % 2 + 1;
        }
        return N;
    }

    bool isHuiwen(int N) {
        vector<int> res;
        while (N != 0) {
            res.push_back(N % 10);
            N = N / 10;
        }
        int i = 0, j = res.size() - 1;
        while (i <= j) {
            if (res[i] != res[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

    bool isSushu(int N) {
        if (N <= 3)
            return N > 1;
        if (N % 6 != 1 && N % 6 != 5)
            return false;
        int sq = (int)sqrt(N);
        for (int i = 5; i <= sq; i += 6) {
            if (N % i == 0 || N % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
};