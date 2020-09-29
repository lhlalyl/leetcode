#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	//vector<int> data{ 2,5,3,4,1 };
	//int res = 0;
	//for (int i = 0; i < data.size() - 2; i++)
	//	for (int j = i + 1; j < data.size() - 1; j++)
	//		for (int k = j + 1; k < data.size(); k++)
	//			if ((data[i] < data[j] && data[j] < data[k]) || (data[i] > data[j] && data[j] > data[k]))
	//				++res;
	//cout << res;

	string s = "abcd";
	cout << s.substr(0, s.size() - 1);

}