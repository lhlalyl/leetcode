#include<iostream>
#include<set>
#include"test.h"

using namespace std;

int main()
{
	Solution s;
	vector<int> arry{ 8,1,5,2,6 };
	vector<int> A, B, C;
	for (int i = 0; i < arry.size(); i++)
	{
		A.push_back(arry[i] + i);
		B.push_back(arry[i] - i);
	}
	multiset<int> res;
	for (int i = arry.size() - 1; i > 0; i--)
	{
		res.insert(B[i]);
		auto it = res.end();
		C.push_back(*(--it));
	}
	int max = A[0] + C[C.size() - 1];
	for (int i = 1; i < arry.size() - 1; i++)
		if (A[i] + C[C.size() - i - 1]>max)
			max = A[i] + C[C.size() - i - 1];
	for (auto c : C)
		cout << c << " ";
	cout << endl;
	cout << max;

}