#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
	vector<int> height{ 110,110,110 };
	vector<int> weight{ 60,54,70 };
    int len = height.size();
    vector<vector<int>> k(len, vector<int>(2, 0));
    for (int i = 0; i < len; ++i) {
        k[i][0] = height[i];
        k[i][1] = weight[i];
    }
    sort(k.begin(), k.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a[0] != b[0]) return a[0] < b[0];
        else return a[1] > b[1];
    });

    vector<int> m(1, 0);
    for (int i = 0; i < len; ++i) {
        auto p = lower_bound(m.begin(), m.end(), k[i][1]) - m.begin();
        if (p == m.size()) m.push_back(k[i][1]);
        else m[p] = k[i][1];
    }
    cout << m.size() - 1;
}