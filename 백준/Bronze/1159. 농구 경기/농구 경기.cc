#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    map<char, int> m;
    string ret;

    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        m[tmp[0]]++;
    }

    for (auto& [key, v] : m) {
        if (v >= 5) {
            ret += key;
        }
    }

    if (ret.empty()) {
        cout << "PREDAJA";
    } else {
        cout << ret;
    }
}