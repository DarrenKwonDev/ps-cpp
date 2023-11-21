#include <bits/stdc++.h>

using namespace std;

int cache[1000001] = {
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
    int n, m;
    cin >> m >> n;

    for (int i = m; i <= n; i++) {
        if (is_prime(i)) {
            cout << i << "\n";
        }
    }
}