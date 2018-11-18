#include <iostream>
#include <vector>

using namespace std;

int main()
{

}

class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target)
	{
		int len = nums.size();
		sort(nums.begin(), nums.end());

		vector<vector<int>> ret;

		for (int i = 0; i < len - 3; i++)
		{
			for (int j = i + 1; j < len - 2; j++)
			{
				for (int k = j + 1; k < len - 1; k++)
				{
					for (int l = k + 1; l < len; l++)
					{
						if (nums[i] + nums[j] + nums[k] + nums[l] == target)
						{
							ret.push_back({ nums[i], nums[j], nums[k], nums[l] });
						}
					}
				}
			}
		}
		sort(ret.begin(), ret.end());
		ret.erase(unique(ret.begin(), ret.end()), ret.end());
		return ret;
	}
};