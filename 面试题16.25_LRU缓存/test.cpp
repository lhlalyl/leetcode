#include<iostream>
#include<string>

using namespace std;

class CmpTest {
public:
	char a;
	short b;
	int c;
};

int main() {
	CmpTest c1, c2;
	memset(&c1, 0, sizeof(CmpTest));
	printf("%d\t", memcmp(&c1, &c2, sizeof(CmpTest)));
	cout << sizeof(CmpTest) << endl;
	cout << c1.a << " " << c1.b << " " << c1.c << endl;
	cout << c2.a << " " << c2.b << " " << c2.c << endl;
}