#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;

bool isNumber(string s) 
{
	unordered_set<char> table;
	if (s[0] >= '0' && s[0] <= '9' || s[0] == '+' || s[0] == '-' || s[0] == ' ')
		for (int i = 1; i < s.size(); i++)
		{
			if (s[i] == '+' || s[i] == '-' || s[i] == 'e' || s[i] == '.')
				table.insert(s[i]);
			if (s[i] >= '0' && s[i] <= '9' || s[i] == '+' || s[i] == '-' || s[i] == 'e' || s[i] == '.')
			{
				if (s[i] == '+' || s[i] == '-')
				{
					if (s[i - 1] != 'e' || table.count('+') || table.count('-'))
						return false;
				}
				else if (s[i] == 'e')
				{
					if (table.count('e') || table.count('+') || table.count('-'))
						return false;
				}
				else if (s[i] == '.')
				{
					if (table.count('e') || table.count('+') || table.count('-') || table.count('.'))
						return false;
				}
			}
			else
				return false;
			return true;
		}
	else
		return false;

}

int main()
{
	string s = "99e2.5";
	cout << isNumber(s);
}