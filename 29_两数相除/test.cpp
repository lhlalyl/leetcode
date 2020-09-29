#include<iostream>
#include<algorithm>
using namespace std;

//int midData(int a, int b, int flag) {
//    int mid = 0;
//    while (a <= b && mid) {
//        mid = (a + b) / 2;
//        if (mid < flag)
//            a = mid + 1;
//        else
//            b = mid - 1;
//    }
//    return mid;
//}


int main() {
    int dividend=160, divisor=10;
    int flag = 0;
    if ((dividend >= 0 && divisor > 0) || (dividend < 0 && divisor < 0))
        flag = 1;
    else
        flag = -1;
    int a = abs(dividend), b = abs(divisor);
    int k = 1;
    while (k * b < a) {
        k = k << 1;
    }
    cout << k;
}