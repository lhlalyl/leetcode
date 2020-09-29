#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int weight(int a)
{
	if (a == 1)return 0;
	if (a % 2)return weight(3 * a + 1) + 1;
	else return weight(a/2) + 1;
}

int main()
{
	int lo = 12;
	int hi = 15;
	int k = 2;
	vector<vector<int>> arry;
	for (int i = lo; i <= hi; i++)
		arry.push_back({ weight(i),i });
	sort(arry.begin(), arry.end(), [](vector<int>& a, vector<int>& b)
	{
		if (a[0] != b[0])
			return a[0] < b[0];
		else
			return a[1] < b[1];
	});

	cout << arry[k - 1][1] << endl;
}