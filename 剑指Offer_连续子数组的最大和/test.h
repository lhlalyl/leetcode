#pragma once

#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    vector<ListNode*> lst;
    ListNode* deleteDuplicates(ListNode* head) {
        while (head != NULL) {
            lst.push_back(head);
            head = head->next;
        }
        int sz = lst.size();
        vector<ListNode*> res;
        for (int i = 0; i < sz;) {
            int j = i;
            while (j < sz && lst[i]->val == lst[j]->val)
                j++;
            if (j - i > 1) {
                i = j;
            }
            else {
                i++;
                res.push_back(lst[i]);
            }
        }
        if (res.empty())
            return NULL;
        for (int i = 0; i < res.size() - 1; i++)
            res[i]->next = res[i + 1];
        res[res.size() - 1]->next = NULL;
        return res[0];

    }
};