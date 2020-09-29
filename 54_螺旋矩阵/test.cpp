#include<iostream>
#include<vector>

using std::vector;
using std::cout;

int main()
{
	//vector<vector<int>> A{ {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	vector<vector<int>> A;
	vector<int> B;
	if (A.size() == 0 || A[0].size() == 0)
		cout << "¿ÕÊý×é";
	else
	{
		int a = 0;
		int m = A.size();
		int n = A[0].size();
		while (B.size() < (A.size() * A[0].size()))
		{
			if (a <= m && a <= n)
			{
				int flag = 0;
				for (int j = a; j < n; j++)
				{
					B.push_back(A[a][j]);
					flag = 1;
				}
				for (int i = a + 1; i < m; i++)
				{
					B.push_back(A[i][n - 1]);
					flag = 2;
				}
				if (flag == 2)
					for (int j = n - 2; j >= a; j--)
					{
						B.push_back(A[m - 1][j]);
						flag = 3;
					}
				if (flag == 3)
					for (int i = m - 2; i > a; i--)
						B.push_back(A[i][a]);
			}
			a++; m--; n--;
		}
	}
}