#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int k) {
	vector <int> result;

	int size = nums.size();
	for (int i = 0; i < size; i ++) {
		if (i != 0 && nums[i] == nums[i - 1]) continue;
		for (int j = i + 1; j < size; j ++) {
			if (nums[i] + nums[j] == k) {
				result.push_back (i + 1);
				result.push_back (j + 1);
				return result;
			}
		}
	}
	return result;
}

int main () {

	// freopen ("data.in", "r", stdin);
	// freopen ("data.out", "w", stdout);

	vector <int> nums = {2, 7, 11, 15};
	vector <int> result = twoSum (nums, 9);
	for (int i : result) printf ("%d ", i);

	return 0;
}
