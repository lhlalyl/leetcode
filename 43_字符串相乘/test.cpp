#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<algorithm>

using namespace std;

int main()
{
	string num1{ "123" }, num2{ "0" };
    int m = num1.size(), n = num2.size();
    vector<int> ans(m + n - 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m + n - 1; j++)
            if (j < m+i && j>=i)
                ans[j] += (num1[j-i] - 48) * (num2[i] - 48);
            else
                ans[j] += 0;
    }
    stack<int> res;
    int flag = 0;
    for (int i = m + n - 2; i >= 0; i--)
    {
        res.push((ans[i] + flag) % 10);
        flag = (ans[i] + flag) / 10;
    }
    if (flag)
        res.push(flag);
    string s;
    while (!res.empty())
    {
        s.push_back(res.top() + '0');
        res.pop();
    }
    cout << s;
}
