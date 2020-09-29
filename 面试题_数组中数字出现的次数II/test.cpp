#include<iostream>
#include<vector>


using namespace std;

int main()
{
	vector<int> nums{ 9,10,7,9,7,9,7 };
    int ones = 0, twos = 0;
    for (int num : nums) {
        ones = ones ^ num & ~twos;
        twos = twos ^ num & ~ones;
    }
	cout <<ones;
    //vector<int> nums{ 4,1,4,6 };
    //int ones = 0, twos = 0;
    //for (int num : nums) {
    //    ones = ones ^ num & ~twos;
    //    twos = twos ^ num & ~ones;
    //}
    //cout << twos << " " << ones;
}