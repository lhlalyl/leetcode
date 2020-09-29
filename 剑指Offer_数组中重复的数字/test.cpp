#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main()
{
	vector<int> nums{ 3,1,2,3 };
    unordered_map<int, int> sp;
    for (int i = 0; i < nums.size(); i++)
        ++sp[nums[i]];
    auto it = sp.begin();
    while (it != sp.end())
    {
        cout << it->first << " " << it->second << endl;
        //if (it->second > 1)
        //{
        //    cout << it->first;
        //    break;
        //}
        ++it;
    }
}