#include<iostream>
#include<vector>


int main()
{
	int a = 2147483647;
	int b = a;
	if ((a % 10 == 0 && a != 0) || a < 0)
		std::cout << "不是回文数" << std::endl;
	else
	{
		unsigned count = a % 10;
		while (a/10)
		{
			a = a / 10;
			if(10 * count + a % 10 <= 2147483647)
				count = 10 * count + a % 10;
		}
		if(count==b)
			std::cout << count << std::endl;
	}
	

}