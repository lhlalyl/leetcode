#include<iostream>
#include"test.h"

using namespace std;

int main()
{
    vector<vector<int>> grid{ {1,2,5},{3,2,1} };
    int m = grid.size();
    int n = grid[0].size();
    for (int i = 1; i < max(m, n); i++)
    {
        if (i < n)
            grid[0][i] += grid[0][i - 1];
        if (i < m)
            grid[i][0] += grid[i - 1][0];
    }


    for (int i = 1; i < m; i++)
        for (int j = 1; j < n; j++)
            grid[i][j] = max(grid[i][j - 1], grid[i - 1][j]) + grid[i][j];
    for (auto& c : grid)
    {
        for (auto d : c)
            cout << d << " ";
        cout << endl;
    }
}