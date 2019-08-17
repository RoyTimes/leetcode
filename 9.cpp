#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <vector>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0) return false;
    int num = 0, tmp = x;
    while (tmp)num = num * 10 + tmp % 10, tmp /= 10;
    return x == num;
}

int main()
{

    freopen("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);

    int x; cin >> x;
    cout << isPalindrome(x) << endl;
    return 0;
}
