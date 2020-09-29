#include<iostream>
#include<Algorithm>

int main()
{
	int a;
	std::cin >> a;
	int arry[10]{ 0 };
	int flag = -1;
	double b = 0;
	for (int i = 0; i < 10; i++)
	{
		arry[i] = a / pow(10, 9 - i);
		a = a - arry[i] * pow(10, 9 - i);
		if (arry[i] != 0 && flag==-1)
		{
			flag = i;
		}
		b = b + arry[i] * pow(10, i - flag);
	}
	if (b > pow(2, 31) - 1 || b < -pow(2, 31))
	{
		std::cout << 0;
	}
	else
	{
		int c = b;
		std::cout << b;
	}
}