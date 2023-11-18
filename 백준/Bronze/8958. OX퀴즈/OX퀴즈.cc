#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int tot = 0;
        int acc = 0;
        for (char k : s) {
            if (k == 'O') {
                tot += acc + 1;
                acc++;
            } else {
                acc = 0;
            }
        }
        cout << tot << "\n";
    }
}