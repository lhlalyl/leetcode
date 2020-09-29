#pragma once


struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}   
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(100);
        bool end1 = true, end2 = true;
        int i = 0, flag = 0;
        while (i<3)
        {
            l3[i].val = (l1[i].val + l2[i].val + flag) % 10;
            flag= (l1[i].val + l2[i].val + flag) / 10;
            i++;
            if (l1->next == nullptr)
                end1 = false;
            if (l2->next == nullptr)
                end2 = false;
        }
        return l3;

    }
};