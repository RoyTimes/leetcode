#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <set>
#include <vector>
using namespace std;

bool is_visited[100010];
vector<int> tmp;
vector<vector<int> > result;

void dfs(vector<int> &nums, int start, int target)
{
    if (target < 0) return;
    else if (target == 0) {
        result.push_back (tmp);
    }
    else {
        for (int i = start; i < nums.size(); i++) {
            // if (i > start && nums[i] == nums[i - 1])
            //     continue;
            tmp.push_back(nums[i]);
            dfs(nums, i, target - nums[i]);
            tmp.pop_back();
        }
    }
}
vector<vector<int> > combinationSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    dfs(nums, 0, target);
    return result;
}
int main()
{

    freopen("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);

    vector<int> nums;

    int tmp;
    while (cin >> tmp)
        nums.push_back(tmp);
    
    int ta = 7;
    auto re = combinationSum(nums, ta);
    for (auto i : re)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}
