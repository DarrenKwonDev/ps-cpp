#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string arr[100001];
    unordered_map<string, int> uMap;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        arr[i + 1] = s;
        uMap[s] = i + 1;
    }

    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        if (isalpha(s[0])) {
            cout << uMap[s] << "\n";
        } else {
            int num = stoi(s);
            cout << arr[num] << "\n";
        }
    }
}