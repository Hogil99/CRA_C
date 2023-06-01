#include <iostream>

class Cal
{
public:
	int getZegop(int a)
	{
		return a * a;
	}

	int getSum(int a, int b)
	{
		return a + b;
  }

	int getSumSum(int a, int b, int c)
	{
		return a + b + c;
	}
  
	int getDivide(int a, int b)
	{
		if (b == 0)
			return 0;
		return a / b;
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
