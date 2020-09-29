#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool Repeat(vector<vector<int>> A, vector<int> B)
{
	for (int i = 0; i < A.size(); i++)
		if (A[i] == B)
			return false;
	return true;
}

int main()
{
	vector<int> nums{ -2,-2,-1,0,-2,-3};
	int target = 2;
	sort(nums.begin(),nums.end());
	vector<int> Left;
	vector<int> Right;
	for (int i = 0; i < nums.size(); i++)
		if (nums[i] < target / 4)
			Left.push_back(nums[i]);
		else
			Right.push_back(nums[i]);

	int L = Left.size();
	int R = Right.size();
	
	vector<vector<int>> res;

	if (Right[0] == 0 && Right[1] == 0 && Right[2] == 0 && Right[3] == 0 && target == 0)
		cout << "{0, 0, 0, 0}" << endl;


	for (int i = 0; i < L; i++)
		for (int j = 0; j < R; j++)
			for (int k = j + 1; k < R; k++)
				for (int m = k + 1; m < R; m++)
					if (Left[i] + Right[j] + Right[k] + Right[m] == target)
						res.push_back({ Left[i],Right[j],Right[k],Right[m] });

	for (int i = 0; i < L; i++)
		for (int j = i+1; j < L; j++)
			for (int k = 0; k < R; k++)
				for (int m = k + 1; m < R; m++)
					if (Left[i] + Left[j] + Right[k] + Right[m] == target)
						res.push_back({ Left[i],Left[j],Right[k],Right[m] });

	for (int i = 0; i < R; i++)
		for (int j = 0; j < L; j++)
			for (int k = j + 1; k < L; k++)
				for (int m = k + 1; m < L; m++)
					if (Right[i] + Left[j] + Left[k] + Left[m] == target)
						res.push_back({ Right[i],Left[j],Left[k],Left[m] });

	vector<vector<int>> res1;
	for (int i = 0; i < res.size(); i++)
		if (Repeat(res1, res[i]))
			res1.push_back(res[i]);

	for (auto c : Left)
		cout << c << " ";
	cout << endl;
	for (auto c : Right)
		cout << c << " ";
	cout << endl;

	for (int i = 0; i < res1.size(); i++)
	{
		for (int j = 0; j < res1[i].size(); j++)
			cout << res1[i][j] << " ";
		cout << endl;
	}
}
