#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

int myAtoi(string str);

int main()
{
	int a = myAtoi("-42");
	cout << a << endl;
	string str = "-2321";
	cout << typeid(int(str[1])).name() << endl;

	system("pause");
 }

int myAtoi(string str) {
	int len = str.length();
	if (len == 0)
		return 0;
	int numlen = 0;
	int sign = 0;
	int ret = 0;
	int bba = 0;

	int i = str.find_first_of(" ");

	if (str[i + 1] == '-')
	{
		sign = -1;
		bba = i + 2;
		for (int a = i + 2; a < len; a++)
		{
			if (isdigit(str[a]))
			{
				numlen++;
			}
			else
			{
				return 0;
			}
		}
	}
	else
	{
		sign = 1;
		bba = i + 1;
		for (int a = i + 1; a < len; a++)
		{
			if (isdigit(str[a]))
			{
				numlen++;
			}
			else
				return 0;
		}
	}
	
	for (bba; bba <= numlen; bba++)
	{
		/***
		if (abs(ret) > INT_MAX / 10)
			return INT_MAX;
			break;
		if (ret < INT_MIN / 10)
			return INT_MIN;
			break;
			**/
		ret = 10 * ret + int (str[bba]);
		cout << int(str[bba]) << endl;
		cout << ret << endl;
	}
	return sign * ret;
}