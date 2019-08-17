#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <set>
#include <vector>
using namespace std;

inline int max (int x, int y) {
    return x > y ? x : y;
}
int lengthOfLongestSubstring(string s)
{
    int ans = 0, i = 0, j = 0;
    int len = s.length();
    set<char> st;

    while (i < len && j < len) {
        if (st.count (s[j]) == 0) {
            st.insert (s[j ++]);
            ans = max (ans, j - i);
        } else st.erase (s[i ++]);
    }
    return ans;
}

int main()
{

    // freopen("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);

    string s; cin >> s;
    cout << lengthOfLongestSubstring (s) << endl;
    return 0;
}
