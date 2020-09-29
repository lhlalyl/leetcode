#pragma once

#include<unordered_map>
#include<stack>

using namespace std;

class FreqStack {
public:
    int maxNum;
    unordered_map<int, int> mp;
    unordered_map<int, stack<int>> group;
    FreqStack() {
        maxNum = 0;
    }

    void push(int x) {
        ++mp[x];
        if (mp[x] > maxNum)
            maxNum = mp[x];
        group[mp[x]].push(x);
    }

    int pop() {
        int p = group[maxNum].top();
        group[maxNum].pop();
        mp[p]--;
        if (group[maxNum].empty())
            maxNum -= 1;
        return p;
    }
};

