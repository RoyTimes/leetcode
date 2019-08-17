#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <vector>
using namespace std;


vector<int> twoSum(vector<int> &nums, int target) {
    for (int i = 0; i < nums.size(); i ++) {
        for (int j = i + 1; j < nums.size(); j ++) {
            if (nums[i] + nums[j] == target) {
                vector<int> result;
                result.push_back (i); result.push_back(j);
                return result;
            }
        }
    }
}

int main()
{

    freopen ("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);
    
    vector<int> nums;
    int x;
    while (cin >> x) nums.push_back(x);
    
    auto result = twoSum(nums, 9);

    for (int i : result)
        cout << i << endl;
    return 0;
}
