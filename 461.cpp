#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
bool board[100][100];

int main () {

	freopen ("data.in", "r", stdin);
	freopen ("data.out", "w", stdout);
	memset (board, 0, sizeof board);

	int n; cin >> n;
	for (int i = 0; i < n; i ++)
		for (int j = 0; j < n; j ++) {
			char ch; cin >> ch;
			if (ch == 'X') board[i][j] = 1;
			else board[i][j] = 0;
		}

	int count = 0;

	// board[i][j]
	for (int i = 0; i < n; i ++)
		for (int j = 0; j < n; j ++) {
			if ()
		}





	return 0;
}
