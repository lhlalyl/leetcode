#include<iostream>

using namespace std;

int main()
{
	int x = 1;
	int y = 2;
	int res = 0;
	for (int i = 0; i < 32; i++)
	{
		if (x % 2 != y % 2)
			res++;
		x = x / 2;
		y = y / 2;
	}
	cout<<res;
}