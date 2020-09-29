#include<iostream>
#include<string>
#include<unordered_map>
#include<utility>

using std::string;
using std::unordered_map;
using std::cout;
using std::endl;

int main()
{
	string s = "LVIII";
	unordered_map < char, int >	Table = { {'I', 1}, { 'V', 5 }, { 'X', 10 }, { 'L',50 }, { 'C', 100}, { 'D',500 }, { 'M',1000 } };
	int res = 0;
	for (int i = 0; i < s.size(); i++)
	{
		switch (s[i])
		{
		case 'I':
			if (s[i + 1] == 'V' || s[i + 1] == 'X')
			{
				res = res + Table[s[i+1]] - 1;
				i++;
			}
			else
				res = res + 1;
			break;
		case 'X':
			if (s[i + 1] == 'L' || s[i + 1] == 'C')
			{
				res = res + Table[s[i+1]] - 10;
				i++;
			}
			else
				res = res + 10;
			break;
		case 'C':
			if (s[i + 1] == 'D' || s[i + 1] == 'M')
			{
				res = res + Table[s[i+1]] - 100;
				i++;
			}
			else
				res = res + 100;
			break;
		default:
			res = res + Table[s[i]];
			break;
		}
	}

	cout << res;

}