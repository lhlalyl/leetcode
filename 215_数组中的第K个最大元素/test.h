#pragma once

#include<vector>

using std::vector;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int> heap(nums.begin(), nums.begin() + k);
        buid(heap);
        for(int i=k;i<nums.size();i++)
            if (nums[i] > heap[0])
            {
                heap[0] = nums[i];
                buid(heap);
            }
        return heap[0];
    }

    void max_heap(vector<int>& A, int i)
    {
        int l = 2 * i + 1, r = 2 * i + 2;
        int largest = i;
        if (l < A.size() && A[l] < A[i])
            largest = l;
        if (r < A.size() && A[r] < A[largest])
            largest = r;
        if (largest != i)
        {
            int temp = A[i];
            A[i] = A[largest];
            A[largest] = temp;
            max_heap(A, largest);
        }
    }

    void buid(vector<int>& A)
    {
        for (int i = A.size() / 2 - 1; i >= 0; i--)
            max_heap(A, i);
    }


};