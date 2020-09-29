#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main()
{
	vector<string> A{ "c==c","f!=a","f==b","b==c"};
	vector<int> num(A.size());
	int numqual = 0;
	vector<vector<int>> word(26,vector<int>(26));
	for (int i = 0; i < 26; i++)
		word[i][i] = 1;
	int largest = 0;
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i][1] == '=')
		{
			word[A[i][0] - 97][A[i][3] - 97] = 1;
			word[A[i][3] - 97][A[i][0] - 97] = 1;
			numqual++;
		}
		if (A[i][0] - 97 > largest)
			largest = A[i][0] - 97;
		if (A[i][3] - 97 > largest)
			largest = A[i][3] - 97;
	}


	if (numqual == A.size())
		cout << "false" << endl;

	for (int i = 0; i < largest; i++)
		for (int j = 0; j < largest; j++)
			for (int k = j+1; k < largest; k++)
				if (word[i][j] && word[i][k])
				{
					word[j][k] = 1;
					word[k][j] = 1;
				}

	for (int i = 0; i < A.size(); i++)
	{
		if (A[i][1] == '!' && word[A[i][0] - 97][A[i][3] - 97] == 1)
		{
			cout << "false" << endl;
			break;
		}
	}
	for (auto c : A)
		cout << c << " ";
	cout << endl;

	for (int i = 0; i < word.size(); i++)
	{
		for (int j = 0; j < word[i].size(); j++)
			cout << word[i][j] << " ";
		cout << endl;
	}

}