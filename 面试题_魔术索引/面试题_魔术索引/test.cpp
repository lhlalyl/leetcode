#include<iostream>
#include<vector>

using namespace std;

vector<int> res;

void magic(vector<int>& A, int l, int r) {
	if (l > r)
		return;
	int mid = (l + r) / 2;
	if (A[mid] > mid) {
		magic(A, A[mid], r);
		magic(A, l, mid - 1);
	}
	else if (A[mid] < mid) {
		magic(A, l, A[mid]);
		magic(A, mid + 1, r);
	}
	else
		res.push_back(mid);
}

int main() {
	vector<int> nums = { 1,1,1,1 };
	magic(nums, 0, nums.size() - 1);

	for (auto c : res)
		cout << c << " ";
}