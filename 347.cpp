#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <vector>
using namespace std;

struct cmp {
	bool operator() (pair <int, int>& a, pair<int,int>& b){
		return a.second  >  b.second;
	}
};
vector<int> topKFrequent(vector<int>& nums, int k) {
	vector <int> result; map <int, int> hash;
	for (int i : nums) hash[i] ++;
	int i = 0;
	vector <pair<int,int> > cut(hash.begin(), hash.end());
	sort(cut.begin(), cut.end(), cmp());


	for (auto it = cut.begin(); it != cut.end(); it ++)
		printf ("%d - %d\n", it -> first, it -> second);
	for (auto it = cut.begin(); it != cut.end() && i < k; it ++, i ++)
		result.push_back ((*it).first);
	return result;
}

int main () {

	// freopen ("data.in", "r", stdin);
	// freopen ("data.out", "w", stdout);

	vector <int> nums = {4,1,-1,2,-1,2,3};
	vector <int> result = topKFrequent (nums, 2);
	for (int i : result) printf ("%d ", i);

	return 0;
}
