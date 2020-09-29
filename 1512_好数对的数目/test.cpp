#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main() {
	vector<int> nums = { 1,1,1,1 };
	stack<int> st;
	st.push(nums[0]);
	int count = 0;
	int sz = nums.size();
	for (int i = 0; i < sz-1; ++i) {
		for (int j = i + 1; j < sz; j++) {
			if (nums[i] == nums[j])
				count++;
		}
	}
	cout << count << endl;
}
