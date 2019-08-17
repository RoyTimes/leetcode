#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <vector>
using namespace std;


// vector<int> productExceptSelf(vector<int>& nums) {
// 	int size = nums.size();
// 	vector <int> pre (size);
// 	vector <int> post (size);
// 	vector <int> result (size);

// 	pre[0] = nums [0];
// 	post[size - 1] = nums[size - 1];

// 	for (int i = 1; i < size; i ++)
// 		pre[i] = pre[i - 1] * nums[i];
// 	for (int i = size - 2; i >= 0; i --)
// 		post[i] = post[i + 1] * nums[i];

// 	result[0] = post[1]; result[size - 1] = pre[size - 2];
// 	for (int i = 1; i < size - 1; i ++)
// 		result [i] = pre[i - 1] * post[i + 1];

// 	return result;
// }

vector<int> productExceptSelf(vector<int>& nums) {
	int size = nums.size();
	vector <int> result (size, 1);
	int pre = 1, post = 1;

	for (int i = 0; i < size; i ++) {
		result [i] *= pre;
		pre *= nums[i];
		result [size - 1 - i] *= post;
		post *= nums[size - 1 - i];
	}
	return result;
}

int main () {

	// freopen ("data.in", "r", stdin);
	// freopen ("data.out", "w", stdout);

	vector <int> nums = {1,2,3,4};
	vector <int> result = productExceptSelf (nums);
	for (int i : result) printf ("%d ", i);

	return 0;
}
