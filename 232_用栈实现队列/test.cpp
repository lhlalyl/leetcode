#include<iostream>

#include"test.h"

int main()
{
	MyQueue *queue = new MyQueue();

	queue->push(1);
	queue->push(2);

	int a = queue->peek();
	int b = queue->pop();
	std::cout << a << " " << b;
	/*<< " " << queue->empty() << std::endl;*/

	//stack<int> s, s1;
	//for(int i=0;i<1;i++)
	//	s.push(i);

	//while (!s.empty())
	//{
	//	s1.push(s.top());
	//	std::cout << s.top() << " ";
	//	s.pop();
	//}
	//int p=s1.top();
	//s1.pop();
}