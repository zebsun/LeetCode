#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int height[] = { 1,2,3,4,5 };

	int len = sizeof(height) / sizeof(height[0]);
	int Area = 0;
	int maxArea = 0;
	for (int i = 0; i < len - 1; i++)
		for (int j = 1; j < len; j++)
		{
			Area = (j - i) * min(height[i], height[j]);
			maxArea = max(maxArea, Area);
		}
	cout << maxArea << endl;
	system("pause");
}
