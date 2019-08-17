#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int> >& nums, int target) {

	int n = nums.size();
	if (n == 0) return false;
	int m = nums[0].size();

	for (int i = 0 ; i < n; i ++) {
		if (target > nums[i][m - 1]) continue;
		else {
			for (int j = 0; j < m; j ++)
				if (target == nums[i][j])
					return true;
			return false;
		}
	}
	return false;
		
}

int main () {

	// freopen ("data.in", "r", stdin);
	// freopen ("data.out", "w", stdout);

	vector <int> nums = {
		{1, 3, 5, 7},
		{10, 11, 16, 20},
		{23, 30, 34, 50}
	};
	int target = 3;
	// vector <int> result = productExceptSelf (nums);
	// for (int i : result) printf ("%d ", i);

	printf("%d\n", searchMatrix (nums, target));

	return 0;
}
