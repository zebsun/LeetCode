#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(int x);

int main()
{
	cout << isPalindrome(121) << endl;
	system("pause");
}

bool isPalindrome(int x)
{
	int ret = 0;
	int numlen = 0;
	int x_left = 0;
	int x_right = 0;
	if (x <= 0)
		return false;
	else
	{
		int a = x;
		while (a != 0)
		{
			numlen++;
			a /= 10;
		}
		int b_1 = x;
		int b_2 = x;
		for (int i = 0; i < numlen / 2; i++)
		{
			x_right = 10 * x_right + b_1 % 10;
			b_1 /= 10;
		}
		if (numlen % 2 == 0)
		{
			x_left = b_2 / pow(10, numlen / 2);
		}
		else
		{
			x_left = b_2 / pow(10, numlen/2 + 1);
		}
		if (x_right == x_left)
			return true;
		else
			return false;
	}
}