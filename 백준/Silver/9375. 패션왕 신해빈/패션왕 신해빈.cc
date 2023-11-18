#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cin.ignore();

        unordered_map<string, int> uMap;

        for (int j = 0; j < n; j++) {
            string s;
            getline(cin, s);

            const auto delim_pos = s.find(" ");
            string type = s.substr(delim_pos + 1);
            uMap[type]++;
        }

        int ret = 1;
        for (auto& [type, cnt] : uMap) {
            ret *= (cnt + 1);
        }
        ret--;
        cout << ret << "\n";
    }
}