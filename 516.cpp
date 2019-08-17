#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <set>
#include <vector>
using namespace std;

int dp[1010][1010];
int longestPalindromeSubseq(string s)
{
    int len = s.length();

    for (int i = len - 1; i >= 0; i --) {
        dp[i][i] = 1;
        for (int j = i + 1; j < len; j++) {
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
        }
    }

    return dp[0][len - 1];
}

int main()
{

    // freopen("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);

    string s;
    cin >> s;
    cout << longestPalindromeSubseq(s) << endl;
    return 0;
}
