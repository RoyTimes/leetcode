#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <set>
#include <stack>
#include <vector>
using namespace std;

stack <int> st;
bool match (char a, char b) {
    return a == '(' && b == ')';
}
int longestValidParentheses (string s) {
    int result = 0, len = s.length();
    st.push (-1);

    for (int i = 0; i < len; i ++) {
        if (s[i] == '(') st.push (i);
        else {
            st.pop(); if (st.empty()) st.push (i);
            else result = max(result, 
                i - st.top());
        }
    }
    return result;
}

int main()
{

    // freopen("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);

    string s; cin >> s;
    cout << longestValidParentheses(s) << endl;
    return 0;
}
