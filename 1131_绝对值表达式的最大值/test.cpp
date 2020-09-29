#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> arr1{ 1,-2 };
	vector<int> arr2{ 8,8 };
	vector<vector<int>> arry{ {1,1,-1},{-1,-1,1},{-1,1,-1},{1,-1,1},{1,-1,-1},{-1,1,1},{-1,-1,-1},{1,1,1} };
	vector<int> maxsub(8);
	for (int i = 0; i < 8; i++)
	{
		maxsub[i] = arry[i][0] * arr1[0] + arry[i][1] * arr2[0];
		for (int j = 1; j < arr1.size(); j++)
		{
			if ((arry[i][0] * arr1[j] + arry[i][1] * arr2[j] - arry[i][2] * j) > maxsub[i])
				maxsub[i] = arry[i][0] * arr1[j] + arry[i][1] * arr2[j] - arry[i][2] * j;
		}
	}
	int largest = 0;
	for (int i = 0; i < 8; i=i+2)
		if (maxsub[i] + maxsub[i + 1] > largest)
			largest = maxsub[i] + maxsub[i + 1];

	cout << largest;
}