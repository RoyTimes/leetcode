#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

string a, b;
int dp[1000010];

// bool match (int i, int j) {
// 	if (j != 0)
// 	return (b[j] == '.' || (b[j] == '*' && (b[j - 1] == a[i]) || 
// 			b[i - 1] == '.') || b[j] == a[i])
// 	else return (b[j] == '.' || b[j] == a[i])
// }
// bool isMatch (string a, string b) {
// 	int lengtha = a.length();
// 	int lengthb = b.length();

// 	if (b[0] == a[0] || b[0] == '.')
// 		dp[0] = 0;
// 	else dp[0] = -1;

// 	for (int i = 1; i < lengthb; i ++) {
// 		int last = dp[i];
// 		if ()
// 	}
// }
// bool isMatch (string a, string b) {
// 	int length = b.length();
// 	int yes = a.length() - 1;

// 	if (b[0] == a[0] || b[0] == '.')
// 		dp[0] = 0;
// 	else dp[0] = -1;

// 	// printf("DP[0] == %d\n", dp[0]);

// 	for (int i = 1; i < length; i ++) {

// 		int last = dp[i - 1];

// 		if (b[i] == '.' || (b[i] == '*' && (b[i - 1] == a[last + 1]) || 
// 			b[i - 1] == '.') || b[i] == a[last + 1])
// 			dp[i] = last + 1;
// 		else dp[i] = -1;

// 		if (dp[i] == yes) return true;

// 		// printf("DP[%d] == %d\n",i, dp[i]);
// 	}

// 	return false;
// }

bool isMatch (string a, string b) {
	int lengtha = a.length ();
	int lengthb = b.length ();

	int i = 0, j = 0;
	while (i < lengtha && j < lengthb) {

		// printf("%d %d\n",i,j );
		if (a[i] == b[j] || b[j] == '.') {
			i ++; j ++;
		} else if (b[j] == '*') {
			while ((a[i] == b[j - 1] || b[j - 1] == '.') && i < lengtha) i ++;
			j ++;
		} else {
			if (b[j + 1] == '*') j += 2;
		}
	}
// printf("%d %d\n",i,j );
	return (i == lengtha && j == lengthb);
}

int main () {
	cin >> a >> b;

	cout << isMatch (a, b);
}
