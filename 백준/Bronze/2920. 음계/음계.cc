#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v(8);
    int asc = 0;
    int desc = 0;

    for (int i = 0; i < 8; i++) {
        cin >> v[i];

        if (i >= 1) {
            if (v[i - 1] == v[i] + 1) {
                desc++;
            }
            if (v[i - 1] == v[i] - 1) {
                asc++;
            }
        }
    }

    if (asc == 7) {
        cout << "ascending";
    } else if (desc == 7) {
        cout << "descending";
    } else {
        cout << "mixed";
    }
}