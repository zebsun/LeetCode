#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

}


class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		//set<int> st(nums.begin(), nums.end());
		//nums.assign(st.begin(),st.end());
		int len = nums.size();
		vector<vector<int>> res;
		for (int i = 0; i < len - 2; i++)
		{
			for (int k = i + 1; k < len - 1; k++)
			{
				for (int l = k + 1; l < len; l++)
				{
					if (nums[i] + nums[k] + nums[l] == 0)
					{
						vector<int> vi = adjust(nums[i], nums[k], nums[l]);
						vector< vector<int> >::iterator iter = find(res.begin(), res.end(), vi);
						if (iter == res.end())
							res.push_back(vi);
					}
				}
			}
		}
		return res;
	}
private:
	vector<int> adjust(int& a, int &b, int &c)
	{
		vector<int> vi;
		vi.push_back(a);
		vi.push_back(b);
		vi.push_back(c);
		sort(vi.begin(), vi.end());
		return vi;
	}

};