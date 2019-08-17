#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <set>
#include <vector>
using namespace std;

bool dp[1010][1010];
int countSubstrings(string s)
{
    int len = s.length(), ans = 0;
    for (int i = len - 1; i >= 0; i--)
        for (int j = i; j < len; j++) {
            dp[i][j] = (s[i] == s[j]) && (j - i <= 2 || dp[i + 1][j - 1]);
            if (dp[i][j]) ans ++;
        }
    return ans;
}

int main()
{

    // freopen("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);

    string s;
    cin >> s;
    cout << countSubstrings(s) << endl;
    return 0;
}
