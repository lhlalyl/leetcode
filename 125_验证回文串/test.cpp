#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s = "A man, a plan, a canal: Pana546ma";
	string s1;
	for (char c:s)
		if (isalnum(c))
			s1.push_back(tolower(c));
	for (int i = 0; i < s1.size() / 2; i++)
		if (s1[i] != s1[s1.size() - i - 1])
			cout << false;
	cout << true;
}