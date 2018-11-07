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
		
		sort(nums.begin(), nums.end());
		
		
		vector<vector<int>> ret;
		int res = 0;



		for (int i = 0; i < nums.size(); i++)
		{
			int start = i + 1, end = nums.size() - 1;
			if (nums[i] + nums[start] + nums[end] == target)
			{
				return target;
				start++;
				end--;
				while (start < end && nums[start] == nums[start - 1]) start++;
				while (start < end && nums[end] == nums[end - 1]) end--;
			}
			else
			{
				ret.push_back({ nums[i], nums[start], nums[end] });
				{
					int res = accumulate(ret.begin(),ret.end(),0);
					for (int k = 0; k < nums.size() - 2; k++)
					{
						int ans = min((*nums.end() - *nums.begin() -target), (res-target));
					}

				}
				return res;
				start++;
				end--;
				while (start < end && nums[start] == nums[start - 1]) start++;
				while (start < end && nums[end] == nums[end - 1]) end--;
			}
		}
	}
};