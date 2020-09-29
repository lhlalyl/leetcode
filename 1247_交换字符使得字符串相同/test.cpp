#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s1{ "xxyyxyxyxx" };
	string s2{ "xyyxyxxxyx" };
	int nums1 = 0;
	int nums2 = 0;
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] != s2[i])
			if(s1[i] == 'x')
				nums1++;
			else
				nums2++;
	}
	if ((nums1 + nums2) % 2)
		cout << 0 << endl;
	else if ((nums1 % 2) == 0)
		cout << nums1 / 2 + nums2 / 2 << endl;
	else
		cout << nums1 / 2 + nums2 / 2 + 2 << endl;
}