#pragma once

#include<vector>

using std::vector;

class Solution {
    bool isColor = true;
public:
    void dfs(vector<vector<int>>& graph, int v, vector<int> color,int col)
    {
        color[v] = col;
        for (int w : graph[v])
        {
            if (color[w] == 0)
                dfs(graph, w, color, -col);
            if (color[w] == color[v])
                isColor = false;
        }
    }

    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> color(graph.size());
        for (int i = 0; i < graph.size(); i++)
        {
            if (color[i]==0)
               dfs(graph, i, color,1);
        }
        return isColor;
    }
};
