#include<iostream>
#include<vector>
#include<algorithm>
#include<list>

using namespace std;

bool cmp(vector<int> A, vector<int> B) {
	return A[0] == B[0] ? A[1] < B[1] : A[0] > B[0];
}

int main() {
	vector<vector<int>> data = { {7, 0},{4, 4},{7, 1},{5, 0},{6, 1},{5, 2} };
	sort(data.begin(), data.end(), cmp);

	vector<vector<int>> res;
	res.push_back(data[0]);
	for (int i = 1; i < data.size(); i++) {
		res.insert(res.begin() + data[i][1], data[i]);
	}
	for (auto c : res)
		cout << c[0] << " " << c[1] << endl;
}