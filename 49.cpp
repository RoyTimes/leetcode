#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#include <map>
#include <set>
#include <vector>
using namespace std;

vector<vector<string> > groupAnagrams(vector<string> &strs)
{
    map<string, multiset<string> > mp;
    for (string s : strs) {
        string t = s;
        sort(t.begin(), t.end());
        mp[t].insert(s);
    }
    vector<vector<string> > anagrams;
    for (auto m : mp) {
        vector<string> anagram(m.second.begin(), m.second.end());
        anagrams.push_back(anagram);
    }
    return anagrams;
}
int main() {

    // freopen("data.in", "r", stdin);
    // freopen ("data.out", "w", stdout);

    string tmp;

    vector <string> strs;
    while (cin >> tmp)
        strs.push_back(tmp);
    auto re = groupAnagrams(strs);

    for (auto i : re)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
