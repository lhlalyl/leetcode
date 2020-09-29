#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

void print(vector<vector<int>>& A) {
    for (auto& c : A) {
        for (auto d : c)
            cout << d << " ";
        cout << endl;
    }
}

struct Node {
    int i, j, h;
    Node(int ii, int jj, int hh) :i(ii), j(jj), h(hh) {}
    bool operator <(const Node& that) const {
        return this->h < that.h;
    }
};

int main() {
	vector<vector<int>> heightMap{ {12,13,1,12},{13,4,13,12},{13,8,10,12},{12,13,12,12},{13,13,13,13} };
    priority_queue<Node> q;
    q.push(Node(1, 1, 1));
    q.push(Node(1, 1, 2));
    cout << q.top().h;

    
}