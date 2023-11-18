#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v(26, -1);
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        int idx = (int)s[i] - (int)'a';
        if (v[idx] == -1) {
            v[idx] = i;
        }
    }
    for (int k : v) {
        cout << k << " ";
    }
}