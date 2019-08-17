#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

string s;

bool isPalindrome (string s, int start, int end) {
	while (start < end) {
		if (s[start] != s[end]) return false;
		start ++; end --;
	}
	return true;
}
bool validPalindrome(string s) {
    int length = s.length();
    int i = 0, j = length - 1;

    while (i < j) {
    	if (s[i] != s[j]) {
    		return isPalindrome (s, i + 1, j) ||
    			isPalindrome (s, i, j -1);
    	} else i ++, j --;
    }
    return true;
}

int main () {
	cin >> s;

	cout << validPalindrome (s);
}
