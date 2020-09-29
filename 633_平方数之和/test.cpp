#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int c = 2147482647;
	int max = sqrt(c)/sqrt(2);
	cout << max << endl;
	for (int i = 0; i <= max; i++)
	{
		int b = sqrt(c - i * i);
		if ((i * i + b * b) == c)
			cout << "true";
	}
	cout << sqrt(c);
}