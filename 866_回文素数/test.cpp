#include<iostream>
#include"Solution.h"
#include<algorithm>

int toHuiwen(int num,bool jiou) {
	int nums = num;
	if (jiou)
		num /= 10;
	while (num != 0) {
		nums = nums * 10 + num % 10;
		num /= 10;
	}
	return nums;
}

int nextHuiwen(int N) {
	int val = N, N1 = N;
	N1 = N1 / 10;
	int count = 1;
	while (N1 != 0)
	{
		val = val / 10;
		N1 = N1 / 100;
		count*=10;
	}
	int val1 = val;
	while (val1 != 0) {
		count *= 10;
		val1 /= 10;
	}
	int flag = ((val + 1) % count == 0 && (val + 1) / count == 1) ? 1 : 0;
	int data1 = toHuiwen(val, 1);
	int data2 = toHuiwen(val+1, flag);
	int data3 = toHuiwen(val, 0);
	int data4 = toHuiwen(val+1, !flag);
	if (data1 <= N) {
		if (data3 <= N)
			return data4;
		else if (data2 < N)
			return data3;
		return data2;
	}
	else
		return data1;
}


//int nextHuiwen(int N) {
//	int a = N, count = 0, num = N;
//	while (a != 0) {
//		count++;
//		a /= 10;
//	}
//	int jiou = count % 2 ? 1 : 0;
//	int nums = num;
//	if (jiou)
//		num /= 10;
//	while (num != 0) {
//		nums = nums * 10 + num % 10;
//		num /= 10;
//	}
//	return;
//}


bool isSushu(int N) {
	if (N <= 3)
		return N > 1;
	if (N % 6 != 1 && N % 6 != 5)
		return false;
	int sq = (int)sqrt(N);
	for (int i = 5; i <= sq; i += 6) {
		if (N % i == 0 || N % (i + 2) == 0) {
			return false;
		}
	}
	return true;
}

bool isHuiwen(int N) {
	vector<int> res;
	while (N != 0) {
		res.push_back(N % 10);
		N = N / 10;
	}
	int i = 0, j = res.size() - 1;
	while (i <= j) {
		if (res[i] != res[j])
			return false;
		i++;
		j--;
	}
	return true;
}

int main() {
	//Solution s;
	//int N =22;
	//int res = nextHuiwen(N);
	//if (isHuiwen(N))
	//	res = N;
	//while (!isSushu(res)) {
	//	res = nextHuiwen(res);
	//}

	cout << nextHuiwen(1234575432);

}

