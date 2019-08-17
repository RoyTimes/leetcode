#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <set>
#include <vector>
using namespace std;

char stack [50010]; int top = 0;
bool match(char a, char b) {
    return (a == '(' && b == ')') ||
           (a == '[' && b == ']') ||
           (a == '{' && b == '}');
}
bool isValid(string s) {
    int result = 0, len = s.length();
    stack[top++] = s[0];

    for (int i = 1; i < len; i++)
        if (top != 0 && match(stack[top - 1], s[i])) top--;
        else stack[top ++] = s[i];

    return (top == 0);
}
int main()
{

    // freopen("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);

    string s;
    cin >> s;
    cout << isValid(s) << endl;
    return 0;
}
