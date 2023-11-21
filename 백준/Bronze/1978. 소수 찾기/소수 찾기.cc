#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (is_prime(tmp)) {
            cnt++;
        }
    }
    cout << cnt;
}