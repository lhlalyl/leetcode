#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums1{ 0 }, nums2{ 1 };
    int m = 0, n = 1;
    int p1 = m - 1, p2 = n - 1, p = m + n - 1;
    while (p >= 0)
    {
        cout << "p1:" << p1 << " " << "p2:" << p2 << " " << "p:" << p << endl;
        if (p1 < 0)
        {
            nums1[p] = nums2[p2];
            p2--;
        }
        else if (p2 < 0)
        {
            nums1[p] = nums1[p1];
            p1--;
        }
        else if(nums1[p1] > nums2[p2])
        {
            nums1[p] = nums1[p1];
            p1--;
        }
        else
        {
            nums1[p] = nums2[p2];
            p2--;
        }
        p--;
    }
    for (auto c : nums1)
        cout << c << " ";
}

