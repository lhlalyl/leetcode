#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

void print(vector<int>& arr) {
	for (auto c : arr)
		cout << c << " ";
	cout << endl;
}

int headNum(int num) {
	while (num > 9)
		num /= 10;
	return num;
}

static bool Mycompare(int num1, int num2) {
	stringstream ss1, ss2;
	string s1, s2;
	ss1 << num1;
	ss1 >> s1;
	ss2 << num2;
	ss2 >> s2;
	if ((s1 + s2).compare(s2 + s1) == 1)
		return true;
	else
		return false;
}

int main() {
	vector<int> nums = { 3,30,307,24,9,314,5,9,32};
	sort(nums.begin(), nums.end(), Mycompare);
	print(nums);
	string s;
	for (int i = 0; i < nums.size(); i++) {
		stringstream ss;
		string s1;
		ss << nums[i];
		ss >> s1;
		s.append(s1);
	}
	cout << s << endl;
	/*vector<vector<int>> ans(9);
	for (int i = 0; i < nums.size(); i++) {
		ans[headNum(nums[i]) - 1].push_back(nums[i]);
	}
	for (int i = 0; i < 9; i++) {
		if(ans[i].size()>1)
			sort(ans[i].begin(), ans[i].end(),Mycompare);
	}

	string s;
	for (int i = 8; i >= 0; --i) {
		if(ans.size()>0)
			for (int j = ans[i].size() - 1; j >= 0; --j) {
				stringstream ss;
				string s1;
				ss << ans[i][j];
				ss >> s1;
				s.append(s1);
			}
	}
	cout << s << endl;
	int num1 = 123;
	int num2 = 103;
	stringstream ss1, ss2;
	string s1, s2;
	ss1 << num1;
	ss1 >> s1;
	ss2 << num2;
	ss2 >> s2;
	cout << s1 << " " << s2 << endl;
	cout << s1 + s2 << endl;
	cout << s2 + s1 << endl;
	cout << (s1 + s2).compare(s2 + s1);*/
	//print(ans);
}
