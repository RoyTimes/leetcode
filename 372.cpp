#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <set>
#include <vector>
using namespace std;

int myPow(int x, int y) {
    x %= 1337;
    int result = 1;
    while (y) {
        if (y & 1) result = result * x % 1337;
        x = x * x % 1337, y >>= 1;
    }
    return result % 1337;
}
int superPow (int x, vector<int>& y) {
    if (y.empty()) return 1;
    int d = y.back(); y.pop_back();
    return myPow(superPow(x, y), 10) * myPow (x, d) % 1337;
}

int main()
{

    freopen("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);

    int x; cin >> x;
    vector<int> y; int tmp;
    while (cin >> tmp) y.push_back (tmp);

    cout << superPow(x, y) << endl;
    return 0;
}
