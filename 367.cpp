#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <vector>
using namespace std;

bool isPerfectSquare (int num) {
	long long l = 0, r = (long long)num;
	while (l <= r) {
		long long mid = (l + r) >> 1;
		long long mq = mid * mid;

		if (mq > num) r = mid - 1;
		else if (mq < num) l = mid + 1;
		else return true;
	} return false;
}


int main () {

	// freopen ("data.in", "r", stdin);
	freopen ("data.out", "w", stdout);
	printf("%d\n", isPerfectSquare(16));
	return 0;
}
