#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<vector<int>> res;
vector<int> ans;

bool hefa(string str) {
	if (str.size() == 2 && str[0] == '0')
		return false;
	if (str.size() == 3) {
		if (str[0] == '0')
			return false;
		int stoi = (str[0] - '0') * 100 + (str[1] - '0') * 10 + str[2] - '0';
		if (stoi > 255)
			return false;
	}
	return true;
}

void dfs(int l, int target) {
	if (target == 0 && ans.size() == 4)
		res.push_back(ans);
	if (target < 0 || l>3)
		return;
	for (int i = 1; i < 4; i++) {
		ans.push_back(i);
		dfs(l + 1, target - i);
		ans.pop_back();
	}
}

template <class T>
void print(vector<vector<T>>& A) {
	for (auto& c : A) {
		for (auto d : c)
			cout << d << " ";
		cout << endl;
	}
}

int main() {
	string s = "25525511135";
	dfs(0, s.size());
	print(res);
	vector<string> res1;
	for (int i = 0; i < res.size(); i++) {
		string s1 = s.substr(0, res[i][0]);
		string s2 = s.substr(res[i][0], res[i][1]);
		string s3 = s.substr(res[i][0] + res[i][1], res[i][2]);
		string s4 = s.substr(res[i][0] + res[i][1] + res[i][2], res[i][3]);
		if (hefa(s1) && hefa(s2) && hefa(s3) && hefa(s4))
			res1.push_back(s1 + "." + s2 + "." + s3 + "." + s4);
	}
	for (auto c : res1)
		cout << c << " " << endl;
	cout << hefa("511") << " " << hefa("255");
}