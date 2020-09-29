#include<iostream>
#include<vector>
#include<map>

using namespace std;

void maxHeap(vector<pair<int,int>>& A,int i) {
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	int largest = i;
	if (left<A.size() && A[left].second<A[largest].second)
		largest = left;
	if (right<A.size() && A[right].second<A[largest].second)
		largest = right;
	if (largest != i) {
		pair<int,int> temp = A[largest];
		A[largest] = A[i];
		A[i] = temp;
		maxHeap(A, largest);
	}
}

void buildHeap(vector<pair<int, int>>& A) {
	int q = A.size() / 2-1;
	for (int i = q; i >= 0; --i) {
		maxHeap(A, i);
	}
}

int main() {
	int sz = nums.size();
	map<int, int> fre;
	for (int i = 0; i < sz; ++i) {
		++fre[nums[i]];
	}
	vector<pair<int, int>> res;
	auto it = fre.begin();
	for (int i = 0; i < k; i++) {
		res.push_back(*it);
		++it;
	}
	buildHeap(res);
	for (int i = k; i < fre.size(); i++) {
		if (res[0].second < it->second) {
			res[0] = *it;
			maxHeap(res, 0);
		}
		++it;
	}

	for (auto c : res) {
		cout << c.first << " ";
	}
}