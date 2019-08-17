#include <cstdio>
#include <climits>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <vector>
#include <sstream>
using namespace std;

int divide (int a, int b) {
    int i = 0;
    if (a == 1 && b == 1) return 1;
    while (i >= 0) {
        if (b * i == a || b * i == a - 1) return i;
        i ++;
    }
    return INT_MAX;
}

int main()
{

    // freopen("data.in", "r", stdin);
    // freopen("data.out", "w", stdout);

    int a, b; cin >> a >> b;
    cout << divide(a, b) << endl;

    return 0;
}
