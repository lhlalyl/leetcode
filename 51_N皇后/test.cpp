#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> res;
vector<int> ans;

bool isQueen(int x1, int y1, int x2, int y2) {
    return (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2));
}

void dfs(int l,int n) {
    if (ans.size() > 1) {
        for (int j = 0; j < ans.size() - 1; j++) {
            if (isQueen(j, ans[j], ans.size()-1, ans[ans.size() - 1]))
                return;
        }
        if (ans.size() == n) {
            res.push_back(ans);
        }
    }
    for (int i = 0; i < n; i++) {
        ans.push_back(i);
        dfs(i,n);
        ans.pop_back();
    }
}

template <class T>
void print(vector<vector<T>> A) {
    for (auto& c : A) {
        for (auto d : c) {
            cout << d << " ";
        }
        cout << endl;
    }
}

int main() {
    dfs(0,20);
    //print(res);
    cout << res.size() << endl;
}