#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <set>
#include <vector>
using namespace std;


void printMatrix(vector<vector<int> > x) {
    for (auto i : x) {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
}

void rotate(vector<vector<int> > &matrix)
{
    int len = matrix.size();

    reverse(matrix.begin(), matrix.end());
    for (int i = 0; i < len; ++i)
        for (int j = i + 1; j < len; ++j)
            swap(matrix[i][j], matrix[j][i]);
}
int main()
{

    freopen("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);

    int x; cin >> x;
    vector <vector<int> > y;
    for (int i = 0; i < x; i ++) {
        int tmp;
        vector <int> tp;
        for (int j = 0; j < x; j ++) {
            cin >> tmp;
            tp.push_back(tmp);
        }
        y.push_back (tp);
    }
    rotate(y); printMatrix (y);
    return 0;
}
