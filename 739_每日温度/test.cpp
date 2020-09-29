#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main()
{
	vector<int> T{ 8,2,5,4,3,9,7,2,5 };
	if (T.empty())
		cout << " ";
	vector<int> res(T.size());
	stack<int> s;
	s.push(0);
	int i = 1;
	while(i<T.size())
		if (!s.empty() && T[i] > T[s.top()])
		{
			res[s.top()] = i-s.top();
			s.pop();
		}
		else
		{
			s.push(i);
			i++;
		}

	//for (int i = 0; i < res.size(); i++)
	//	if (res[i])
	//		res[i] = res[i] - i;
	for (auto c : res)
		cout << c << " ";

}