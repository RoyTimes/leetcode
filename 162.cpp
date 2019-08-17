#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& nums) {
	int size = nums.size();
	
	int left = 0, right = size - 1;
	while (left < right - 1) {
		int mid = (left + right) >> 1;
		if (nums[mid - 1] < nums[mid] && nums[mid + 1] < nums[mid])
			return mid;
		else if (nums[mid] > nums[mid + 1])
			right = mid - 1;
		else left = mid + 1;
	}
	return nums[left] > nums[right] ? left : right;
}

int main () {

	// freopen ("data.in", "r", stdin);
	freopen ("data.out", "w", stdout);

	vector <int> nums = {1, 2, 3, 1, 2, 3};
	int result = findPeakElement (nums);
	printf("%d\n", result);


	return 0;
}
