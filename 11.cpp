#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <vector>
using namespace std;

int maxArea(vector<int> &x)
{
    int len = x.size(), ans = 0;
    
    int i = 0, j = len - 1;
    while (i < j) {
        ans = max (ans, min(x[i], x[j])*(j - i));
        if (x[i] > x[j]) j --;
        else i ++;
    }

    return ans;
}

int main()
{

    freopen("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);

    vector<int> nums;
    int x;
    while (cin >> x)
        nums.push_back(x);

    auto result = maxArea(nums);

    // for (int i : result)
        cout << result << endl;
    return 0;
}
