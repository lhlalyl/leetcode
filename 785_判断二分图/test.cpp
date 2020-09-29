#include<iostream>
#include<vector>
#include"Data.h"

using namespace std;

int main()
{
	Solution s;
	vector<vector<int>> graph{ {1,2,3},{0,2},{0,1,3},{0,2} };
	//vector<vector<int>> graph{ {2,3,5,6,7,8,9},{2,3,4,5,6,7,8,9},{0,1,3,4,5,6,7,8,9},{0,1,2,4,5,6,7,8,9},{1,2,3,6,9},{0,1,2,3,7,8,9},{0,1,2,3,4,7,8,9},{0,1,2,3,5,6,8,9},{0,1,2,3,5,6,7},{0,1,2,3,4,5,6,7} };
	cout << s.isBipartite(graph);

}