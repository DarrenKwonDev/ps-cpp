#include <bits/stdc++.h>

using namespace std;

int cache[10001] = {
    0,
};

bool is_prime(int n) {

    if (cache[n]) {
        return true;
    }

    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    cache[n] = 1;
    return true;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<int> uSet;

    int n, m;
    cin >> m >> n;

    bool flag_prime_none = 1;
    for (int i = m; i <= n; i++) {
        if (is_prime(i)) {
            flag_prime_none = 0;
        }
    }
    if (flag_prime_none) {
        cout << -1;
        return 0;
    }

    int mn = -1;
    int tot = 0;

    for (int i = n; i >= m; --i) {
        if (cache[i]) {
            tot += i;
            mn = i;
        }
    }

    cout << tot << "\n"
         << mn;
}