#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <vector>
#include <sstream>
using namespace std;

bool isAnagram(string a, string b) {
    sort (a.begin(), a.end());
    sort (b.begin(), b.end());
    return a == b;
}

int main()
{

    // freopen("data.in", "r", stdin);
    // freopen("data.out", "w", stdout);

    string a, b; cin >> a >> b;
    cout << isAnagram (a, b) << endl;

    return 0;
}
