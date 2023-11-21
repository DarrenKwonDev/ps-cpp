#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    while (cin >> n) {
        long long one_num = 1;
        int cnt = 1;

        while (1) {
            if (one_num % n == 0) {
                cout << cnt << "\n";
                break;
            } else {
                one_num = one_num * 10 + 1;
                one_num %= n;
                cnt++;
            }
        }
    }
}