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

void dfs(vector<int> &nums, int start) {
    result.push_back(tmp);
    for (int i = start; i < nums.size(); i++) {
        tmp.push_back(nums[i]);
        dfs(nums, i + 1);
        tmp.pop_back();
    }
}
vector<vector<int> > subsets(vector<int> &nums) {
    dfs(nums, 0);
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

    auto re = subsets(nums);
    for (auto i : re)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}
