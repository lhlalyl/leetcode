#include<iostream>
#include"test.h"

using namespace std;

int main()
{
	Solution s;
	vector<int> prices{ 7,1,5,3,6,4 };
    int ans = 0, mid = 0;
    int head = prices[0], tail = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > tail)
            tail = prices[i];
        if (prices[i] < head)
        {
            head = prices[i];
            tail = prices[i];
            mid = 0;
        }
        mid = tail - head;
        if (mid > ans)
            ans = mid;
    }
    cout << ans;
	//cout<<s.maxProfit(prices);
}