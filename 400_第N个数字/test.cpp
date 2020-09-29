#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	//2 147 483 647
	int n= 1000;
	vector<int> arry{ 0, 9, 189, 2889, 38889, 488889, 5888889, 68888889, 788888889 };
	int j = lower_bound(arry.begin(), arry.end(), n) - arry.begin();
	int res = 0;
	int mid = pow(10, j-1) - 1 + (n - arry[j-1]) / j + 1;
	if ((n - arry[j-1]) % j == 0)
		res = (mid - 1) % 10;
	else
	{
		res = (int)(mid / pow(10, j - (n - arry[j-1]) % j)) % 10;
	}
	cout << res << endl;
}