#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int occur[10001] = {
        0,
    };

    cin >> n;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        occur[tmp] += 1;
    }

    for (int i = 0; i < 10001; i++) {
        for (int j = 0; j < occur[i]; j++) {
            cout << i << "\n";
        }
    }
}