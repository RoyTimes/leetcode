#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <vector>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

int abs (int x) {
	return x < 0 ? -x : x;
}
vector<int> findDuplicates(vector<int>& nums) {
	int size = nums.size();
	vector <int> result;

	for (int i = 0; i < size; i ++) {
		if (nums[abs(nums[i]) - 1] < 0) 
			result.push_back (abs(nums[i]));
		else nums[abs(nums[i]) - 1] = - nums[abs(nums[i]) - 1];
	}
	return result;
}

int main () {

	// freopen ("data.in", "r", stdin);
	// freopen ("data.out", "w", stdout);

	// vector <int> nums = {3,11,8,16,4,15,4,17,14,14,6,6,2,8,3,12,15,20,20,5};
	vector <int> nums = {5,4,6,7,9,3,10,9,5,6};
	
	// sort (nums.begin(), nums.end());
	// for (int i : nums) printf("%d ", i);
	// puts("");


	vector <int> result = findDuplicates (nums);

	
	for (int i : result) printf ("%d ", i);

	return 0;
}
