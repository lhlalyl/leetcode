#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> res;
string ans;
vector<string> tbl = { "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };

void dfs(int index, string s,int sz) {
	if (ans.size() == sz) {
		res.push_back(ans);
		return;
	}
	int in = s[index] - '2';
	for (int i = 0; i < tbl[in].size(); i++) {
		ans.push_back(tbl[in][i]);
		dfs(index + 1, s, sz);
		ans.pop_back();
	}
}

template <class T>
void print(vector<T>& A) {
	for (auto c : A)
		cout << c << " ";
	cout << endl;
}

int main() {
	string s = "23";
	int sz = s.size();
	dfs(0, s, sz);
	print(res);

}
