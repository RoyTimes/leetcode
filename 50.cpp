#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <set>
#include <vector>
using namespace std;

double myPow (double x, int y) {
    if (y == 0) return 1;
    double result = 1;

    while (y) {
        if (y & 1) {
            if (y > 0)result *= x;
            else result /= x;
        }
        x *= x; y /= 2;
    }
    return result;
}

int main()
{

    // freopen("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);

    int x; double y;
    cin >> y >> x;
    cout << myPow(y, x) << endl;
    return 0;
}
