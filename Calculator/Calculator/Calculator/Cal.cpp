#include <iostream>

class Cal
{
public:

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
