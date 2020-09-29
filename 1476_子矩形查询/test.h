#pragma once

#include<vector>

using std::vector;

class SubrectangleQueries {
    vector<vector<int>> tangle;
public:
    SubrectangleQueries(vector<vector<int>>& rectangle):tangle(rectangle){

    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for (int i = row1; i <= col1; i++)
            for (int j = row2; j <= col2; j++)
                tangle[i][j] = newValue;
    }

    int getValue(int row, int col) {
        return tangle[row][col];
    }
};