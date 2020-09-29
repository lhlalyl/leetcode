#include<iostream>
#include<list>
#include"Solution.h"

using std::list;
using std::cout;
using std::endl;

int* max(int* a, int* b)
{
	if (*a > *b)
		return a;
	else
		return b;

}

int main()
{
	Solution s;
	ListNode l1[] = { 2,4,3 };
	ListNode l2[] = { 5,2,4 };
	ListNode l3(5);
	//ListNode* l3 = new ListNode(1);
	//ListNode* l3=s.addTwoNumbers(l1, l2);

	//for (auto c : l3)
	//cout << l1[0]->next << endl;
	//cout << (*l3++).val << endl;
	
	ListNode* p = l1;
	cout << l3.val << " " << l3.next << endl;
	cout << p->val << endl;
	cout << p->next;
	

	//int a = 0;
	//int b = 2;
	//int* p = max(&a, &b);
	//cout << p << " " << *p << endl;


	/*list<int> l1{ 2,4,3 };
	list<int> l2{ 5,6,6,5 };
	list<int> l3;
	if (l1.size() > l2.size())
		swap(l1, l2);

	int flag = 0;

	while (l2.begin() != l2.end())
	{
		if (l1.begin() == l1.end())
			l1.push_back(0);
		l3.insert(l3.end(), (*l1.begin() + *l2.begin() + flag) % 10);
		flag = (*l1.begin() + *l2.begin() + flag) / 10;
		l1.erase(l1.begin());
		l2.erase(l2.begin());
	}


	for (auto c : l3)
		cout << c;*/
}