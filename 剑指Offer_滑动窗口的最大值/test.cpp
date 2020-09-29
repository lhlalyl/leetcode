#include<iostream>
#include<deque>
#include<vector>

using namespace std;

void print(vector<int>& arr) {
	for (auto c : arr)
		cout << c << " ";
	cout << endl;
}

int main() {
	vector<int> nums = { 7,2,4};
	int k = 1;
	deque<int> que;
	vector<int> res;
	for (int i = 0; i < nums.size(); i++) {
		while (!que.empty() && nums[i] > nums[que.back()])
			que.pop_back();
		if (!que.empty() && que.front() < i - k + 1)
			que.pop_front();
		que.push_back(i);
		if (i >= k - 1)
			res.push_back(nums[que.front()]);
	}
	print(res);
	string s;
	s.push_back(1+'0');
	cout << s;
}
