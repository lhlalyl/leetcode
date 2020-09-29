#include<iostream>
#include"test.h"

int main() {
	FreqStack s;
	s.push(4);
	s.push(0);
	s.push(9);
	s.push(3);
	s.push(4);
	s.push(2);
	cout << s.pop() << endl;
	s.push(6);
	cout << s.pop() << endl;
	s.push(1);
	cout << s.pop() << endl;
	s.push(1);
	cout << s.pop() << endl;
	s.push(4);
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
}