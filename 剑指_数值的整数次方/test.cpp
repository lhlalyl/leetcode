#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


double myPow(double x, int n)
{
    if (n == 1)
        return x;
    int exp = n >= 0 ? n : -n;
    double ans = x;
    double i = 2;
    vector<double> data;
    data.push_back(x);
    for (; i < exp; i = 2 * i)
    {
        ans = ans * ans;
        data.push_back(ans);
    }
    for (auto c : data)
        cout << c << " ";
    cout << endl;
    int diff = exp - i/2;
    int bits = 1;
    for (int j = 0; j < 31; j++)
    {
        if (diff & bits)
            ans *= data[j];
        diff >>= 1;
    }

    return n >= 0 ? ans : 1 / ans;
}

int main()
{



}