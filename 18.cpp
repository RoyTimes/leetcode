#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <set>
#include <vector>
#include <sstream>
using namespace std;

vector< vector<int> > fourSum(vector<int> &x, int target){
    vector<vector<int> > ans;
    sort (x.begin(), x.end());
    int len = x.size();

    for (int i = 0; i < len - 2; i ++) {
        for (int j = i + 1; j < len - 1; j ++) {
            for (int k = j + 1; k < len; k ++) {
                
            }
        }
    }


    return ans;
}
int main()
{

    freopen("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);
    vector <int> nums;

    int tmp;
    while (cin >> tmp) nums.push_back (tmp);

    auto x = fourSum(nums, 0);
    for (auto i : x){
        for (int j : i)
            cout << j << " ";
        puts("");
    }
    return 0;
}
