#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> a{ -115, -172, 331 };
	vector<int> b{ 112, -36, 41 };
	double CenterAx = (2 * (double)a[0] + a[2]) / 2;
	double CenterAy = (2 * (double)a[1] + a[2]) / 2;
	double CenterBx = (2 * (double)b[0] + b[2]) / 2;
	double CenterBy = (2 * (double)b[1] + b[2]) / 2;
	cout << CenterAx << " " << CenterAy << " " << CenterBx << " " << CenterBy << endl;
	if (CenterAx > CenterBx)
	{
		swap(a, b);
		swap(CenterAx, CenterBx);
		swap(CenterAy, CenterBy);
	}
	cout << CenterAx << " " << CenterAy << " " << CenterBx << " " << CenterBy << endl;

	vector<double> c(4);
	if (CenterAx == CenterBx)
	{
		c[0] = CenterAx;
		c[1] = a[1] > b[1] ? b[1] : a[1];
		c[2] = CenterAx;
		c[3] = (a[1] + a[2]) > (b[1] + b[2]) ? (a[1] + a[2]) : (b[1] + b[2]);

	}
	else
	{
		double k = (CenterBy - CenterAy) / (CenterBx - CenterAx);
		if (k > -1 && k<1)
		{
			c[0] = a[0] > b[0] ? b[0] : a[0];
			c[1] = k * (c[0] - CenterAx) + CenterAy;
			c[2] = (a[0] + a[2]) > (b[0] + b[2]) ? (a[0] + a[2]) : (b[0] + b[2]);
			c[3] = k * (c[2] - CenterAx) + CenterAy;
		}
		else
		{
			c[1] = k > 0 ? a[1] : ((double)a[1] + a[2]);
			c[0] = (c[1] - CenterAy) / k + CenterAx;
			c[3] = k > 0 ? ((double)b[1] + b[2]) : b[1];
			c[2] = (c[3] - CenterAy) / k + CenterAx;
		}
	}
	for (auto d : c)
		cout << d << " ";


}