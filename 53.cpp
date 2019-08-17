#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
	int size = nums.size(), 
		result = nums[0], current = nums[0];

	for (int i = 1; i < size; i ++)
		current = max (current + nums[i], nums[i]),
		result = max (result, current);
		
	return result;
}

int main () {

	// freopen ("data.in", "r", stdin);
	// freopen ("data.out", "w", stdout);

	vector <int> nums = {-2,1,-3,4,-1,2,1,-5,4};
	printf ("%d\n", maxSubArray (nums));
	return 0;
}
