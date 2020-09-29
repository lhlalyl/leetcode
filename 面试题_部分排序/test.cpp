#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> array{ 1,3,9,7,5 };
	if (array.size() < 3)
		return { -1,-1 };
	int head = 0;
	int tail = array.size() - 1;
	while (head < tail)
	{
		if (array[head + 1] >= array[head])
			head++;
		if (array[tail] >= array[tail - 1])
			tail--;
		if (array[head + 1] < array[head] && array[tail] < array[tail - 1])
			break;
	}

	if (head == tail)
		return { -1,-1 };

	int mx = array[head + 1], mn = mx;
	for (int i = head + 2; i < tail; i++)
	{
		if (array[i] > mx)
			mx = array[i];
		if (array[i] < mn)
			mn = array[i];
	}

	mx = max(array[head], mx);
	mn = min(mn, array[tail]);

	while (array[head] > mn && head != 0)
	{
		head--;
	}

	while (array[tail] < mx && tail != array.size() - 1)
	{
		tail++;
	}

	//return { head + 1,tail - 1 };

	cout << head+1 << " " << tail-1 << endl;
}