#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v(42, 0);

    for (int i = 0; i < 10; i++) {
        int tmp;
        cin >> tmp;
        v[tmp % 42] += 1;
    }
    int cnt = 0;
    for (int k : v) {
        if (k != 0) {
            cnt++;
        }
    }
    cout << cnt;
}