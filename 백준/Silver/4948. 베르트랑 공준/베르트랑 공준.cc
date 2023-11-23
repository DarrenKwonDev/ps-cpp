#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

bool cache[250000] = {
    0,
};

bool ispr(int n) {
    if (n <= 1) {
        return false;
    }
    if (cache[n]) {
        return true;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    cache[n] = 1;
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n) {
        if (n == 0) {
            break;
        }

        int cnt = 0;
        for (int i = n + 1; i <= 2 * n; i++) {
            if (ispr(i)) {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}