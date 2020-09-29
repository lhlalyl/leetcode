#include<iostream>
#include<vector>

using namespace std;

vector<int> x = { 0,0,-1,1 };
vector<int> y = { 1,-1,0,0 };
vector<string> res;
string s;
bool flag;

void dfs(vector<vector<char>>& board, vector<vector<bool>>& marked, string word, int l, int r, int m, int n, int index) {
    if (s == word) {
        res.push_back(s);
        return;
    }
    if (l < 0 || l >= m || r<0 || r>=n || word[index] != board[l][r])
        return;
    for (int i = 0; i < 4; i++) {
        if (!marked[l][r]) {
            marked[l][r] = true;
            s.push_back(board[l][r]);
            dfs(board, marked, word, l + x[i], r + y[i], m, n, index + 1);
            s.pop_back();
            marked[l][r] = false;
        }
    }
}

template <class T>
void print(vector<vector<T>>& board) {
    for (auto& c : board) {
        for (auto d : c) {
            cout << d << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<char>> board = { {'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'} };
    string word = "ABCCED";
    print(board);
    cout << endl;
    int m = board.size();
    int n = board[0].size();
    vector<vector<bool>> marked(m, vector<bool>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == word[0]) {
                dfs(board, marked, word, i, j, m, n, 0);
            }
            if (flag)
                break;
        }
        if (flag)
            break;
    }
    for (auto c : res)
        cout << c << " ";
    cout << endl;
}
