#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<string> res;
string s;

char change(char c) {
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    return c - 'A' + 'a';
}

void dfs(int l, int k, vector<int>& letterIndex, int count, string S) {
    if (count == k) {
        res.push_back(S);
        return;
    }

    for (int i = l; i < letterIndex.size(); i++) {
        S[letterIndex[i]] = change(S[letterIndex[i]]);
        count++;
        dfs(i + 1, k, letterIndex, count, S);
        count--;
        S[letterIndex[i]] = change(S[letterIndex[i]]);
    }
}

template <class T>
void print(vector<T> A) {
    for (auto c : A) {
        cout << c << endl;
    }
}

int main() {
	string S = "a1b2";
    vector<int> letterIndex;
    for (int i = 0; i < S.size(); i++) {
        if (isalpha(S[i]))
            letterIndex.push_back(i);
    }
    dfs(0, 0, letterIndex, 0, S);
    print(letterIndex);
    print(res);
}
