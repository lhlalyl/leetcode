#pragma once

class Solution {
public:
    unordered_set<int> st;
    vector<ListNode*> lst;
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)
            return NULL;
        while (head != NULL) {
            lst.push_back(head);
            head = head->next;
        }
        int sz = lst.size();
        vector<ListNode*> res;
        for (int i = 0; i < sz;) {
            int j = i;
            if (j < sz && lst[i]->val == lst[j]->val)
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
        return res[0];

    }
};