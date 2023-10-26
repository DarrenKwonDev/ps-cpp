#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // 5
    // 0 9 0
    // 1 7 1
    // 2 5 2
    // 3 3 3
    // 4 1 4
    // 3 3 3
    // 2 5 2
    // 1 7 1
    // 0 9 0

    for (int i = 0; i < 2 * n - 1; i++) {
        if (i < n) {
            // cout << i << " ";
            // cout << (2 * n - 2 * i - 1);
            for (int j = 0; j < i; j++) {
                cout << " ";
            }

            for (int j = 0; j < (2 * n - 2 * i - 1); j++) {
                cout << "*";
            }

        } else {
            // cout << 2 * n - i - 2 << " ";
            // cout << (2 * n - 1) - 2 * (2 * n - i - 2);

            for (int j = 0; j < 2 * n - i - 2; j++) {
                cout << " ";
            }
            for (int j = 0; j < (2 * n - 1) - 2 * (2 * n - i - 2); j++) {
                cout << "*";
            }
        }

        cout
            << "\n";
    }

    return 0;
}