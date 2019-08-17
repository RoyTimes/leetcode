#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <set>
#include <vector>
using namespace std;

int trap(vector<int> &x)
{
    int len = x.size();
    int cur = -1, ans = 0;

    bool first = true;
    for (int i = 0; i < len; i ++) {
        if (x[i] == 0 && first) continue;
        first = false;

        if (cur < x[i]) {
            cur = x[i];
            int cu = i;

            cout << cur << " CUR" << endl;
            while (cu < len && x[++ cu] < cur);
            
            cout << i << " " << cu << " CU" << endl;
            for (int j = i; j < cu; j ++) {
                cout << x[j] << " ";
                ans += (min(cur, x[cu]) - x[j]);
            }
            cout << ans << endl;
            i = cu - 1; cur = -1;
        }
    }
    return ans;
}

int main()
{

    freopen("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);

    vector<int> nums;

    int tmp;
    while (cin >> tmp)
        nums.push_back(tmp);
    cout << trap(nums) << endl;
    return 0;
}
