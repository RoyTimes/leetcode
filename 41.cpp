#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <set>
#include <vector>
using namespace std;

int firstMissingPositive(vector<int> &x) {

    int len = x.size();
    for (int i = 0; i < len; i ++) {
        while (x[i] > 0 && x[i] <= len && x[x[i] - 1] != x[i])
            swap (x[i], x[x[i] - 1]);
    }

    for (int i = 0; i < len; i ++)
        if (x[i] != i + 1) return i + 1;
    return len + 1;
}

int main()
{

    freopen("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);

    vector<int> nums;

    int tmp;
    while (cin >> tmp)
        nums.push_back(tmp);
    cout << firstMissingPositive(nums) << endl;
    return 0;
}
