#include<iostream>
#include<map>

using namespace std;

int main()
{
	multimap<int, int> mp;
	mp.insert({ 1,1 });
	mp.insert({ 2,2 });
	mp.insert({ 3,3 });
	mp.insert({ 4,4 });
	mp.insert({ 5,5 });



	auto it = mp.find(3);
	cout << it-mp.begin();
}