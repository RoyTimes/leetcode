#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <set>
#include <vector>
using namespace std;

bool is_visited[100010];
vector <int> tmp;
vector <vector<int> > result;

void dfs (vector<int>& nums) {
    if (tmp.size() == nums.size()) {
        result.push_back (tmp);
        return;
    }
    for (int i = 0; i < nums.size(); i ++) {
        if (!is_visited [i]) {
            is_visited[i] = 1, tmp.push_back (nums[i]);
            dfs (nums);
            tmp.pop_back(), is_visited[i] = 0;
        }
    }
}
vector<vector<int> > permute(vector<int> &nums) {
    dfs (nums); return result;
}
int main()
{

    freopen("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);

    vector<int> nums;

    int tmp;
    while (cin >> tmp)
        nums.push_back(tmp);
    
    auto re = permute(nums);
    for (auto i : re) {
        for (auto j : i) cout << j << " ";
        cout << endl;
    }
    return 0;
}
