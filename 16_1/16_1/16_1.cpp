#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{

}

class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {

		if (nums.size() < 3) return 0;

		sort(nums.begin(), nums.end());

		int closest = nums[0] + nums[1] + nums[2];
		for (int i = 0; i < nums.size() - 2; i++)
		{
			int start = i + 1;
			int end = nums.size() - 1;
			while (start < end)
			{
				int cursum = nums[i] + nums[start] + nums[end];
				if (cursum == target) return cursum;
				if (abs(cursum - target) < abs(closest - target))
				{
					closest = cursum;
				}
				if (cursum > closest)
				{
					end--;
				}
				else
				{
					start++;
				}
			}
		}
		return closest;
	}
};