#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <set>
#include <vector>
using namespace std;
int expand(string s, int left, int right)
{
    int len = s.length();
    while (left >= 0 && right < len && s[left] == s[right])
        left --, right ++;
    return right - left - 1;
}
string longestPalindrome(string s)
{
    int len = s.length();
    int st = 0, ln = 0;

    for (int i = 0; i < len; i++)
    {
        int res1 = expand(s, i, i);
        int res2 = expand(s, i, i + 1);

        if (max(res1, res2) > ln) {
            st = i - (max(res1, res2) - 1) / 2;
            ln = max(res1, res2);
        }
    }
    return s.substr(st, ln);
}

int main()
{

    // freopen("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);

    string s;
    cin >> s;
    cout << longestPalindrome(s) << endl;
    return 0;
}
