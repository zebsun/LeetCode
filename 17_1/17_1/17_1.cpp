#include <iostream>
#include <vector>

using namespace std;

int main()
{

}

class Solution {
public:
	vector<string> letterCombinations(string digits)
	{
		vector<string> res;
		if (digits == "") {
			return res;
		}

		vector<string, 10> dict(10);
		dict[0] = "";
		dict[1] = "";
		dict[2] = "abc";
		dict[3] = "def";
		dict[4] = "ghi";
		dict[5] = "jkl";
		dict[6] = "mno";
		dict[7] = "pqrs";
		dict[8] = "tuv";
		dict[9] = "wxyz";

		res.push_back("");

		for (int i = 0; i < digits.size(); i++) {
			int size = res.size();
			for (int j = 0; j < size(; j++) {
				string cur = res[0];
				res.erase(res.begin());
				for (int k = 0; k < dict[digits[i] - '0']; k++) {
					res.push_back(cur + dict[digits[i] - '0'][k]);
				}
			}
		}
		return res;
	}
};