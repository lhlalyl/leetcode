#pragma once
#include<stack>
using std::stack;
class MyQueue {
    stack<int> spush;
    stack<int> spop;
    int* head;
    int sz;
public:
    /** Initialize your data structure here. */
    MyQueue():sz(0),head(nullptr) {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        spush.push(x);
        if (head == nullptr)
            head = &spush.top();
        ++sz;
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while (!spush.empty())
        {
            spop.push(spush.top());
            spush.pop();
        }
        int q = spop.top();
        spop.pop();
        if (spop.empty())
            head = nullptr;
        else
            head = &spop.top();
        while (!spop.empty())
        {
            spush.push(spop.top());
            spop.pop();
        }
        --sz;
        return q;
    }

    /** Get the front element. */
    int peek() {
        if (head != nullptr)
            return *head;
        else
            return 0;
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return sz ? false : true;
    }
};