#include<iostream>
#include<string>
#include<vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;

int main()
{
	string Roman[]{ "I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M" };
	int RomanNum[]{  1,   4,   5,   9, 10, 40,  50,  90,100, 400,500, 900,1000 };
	string result;
	const int sz = 13;
	int a = 1994;
	int sang;
	for (int i = sz-1; i >= 0; i--)
	{
		sang = a / RomanNum[i];
		a = a % RomanNum[i];
		switch (sang)
		{
		case 1:
			result = result + Roman[i];
			break;
		case 2:
			result = result + Roman[i] + Roman[i];
			break;
		case 3:
			result = result + Roman[i] + Roman[i] + Roman[i];
			break;
		default:
			break;
		}
	}
	cout << result;
}
