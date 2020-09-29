#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s{};
	string s1;
	int j = s.size() - 1;
	for (int i = 0; i < s.size(); i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z'))
				s1.push_back(s[j]);
			else
				i--;
			j--;
		}
		else
			s1.push_back(s[i]);
	}
	cout << s << endl;
	cout << s1 << endl;

}