#include <iostream>

class Cal
{
public:
	int getZegop(int a)
	{
		return a * a;
	}
  int getGop(int a, int b);
	int getMinus(const int& a, const int& b)
	{
		return a - b;
	}
};

int Cal::getGop(int a, int b)
{
	return a * b;
}
