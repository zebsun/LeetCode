#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<string> strs = ["hasdjfkfha","kjhsadffhgbkjsadfh"];
	if(strs.empty())
	{
		return string("");
	}
	else if (strs.size() == 1);
	{
		return strs[0];
	}
	else
	{
		sort(strs.begin(), strs.end());
		itn length = 0;
		int size = min(strs[0].size(), strs[strs.size() - 1].size());
		while (length < size && strs[0][length] == strs[strs.size() - 1][length])
		{
			++length;
		}
		return strs[0].substr(0, length);
	}
	system("pause");
}