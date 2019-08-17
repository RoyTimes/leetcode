#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <vector>
#include <sstream>
using namespace std;

stringstream ss;
int _reverse(int x) {
    bool flag = false;
    if (x < 0) x = -x, flag = true;

    ss << x; string tmp; ss >> tmp; ss.clear();
   
    string s;
    for (auto it = tmp.rbegin(); it != tmp.rend(); it ++ )
        s += *it;

    ss << s; int result; ss >> result;

    if (result < 0 || result == 2147483647)
        return 0;
    else
        return flag ? -result : result;
}

int main()
{

    freopen ("data.in", "r", stdin);
    // freopen("data.out", "w", stdout);

    int num; cin >> num;
    int result = _reverse(num);
    cout << result << endl;

    return 0;
}
