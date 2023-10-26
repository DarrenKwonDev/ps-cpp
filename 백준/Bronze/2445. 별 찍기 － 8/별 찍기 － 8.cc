#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // 5
    // 1 8 1
    // 2 6 2
    // 3 4 3
    // 4 2 4
    // 5 0 5
    // 4 2 4
    // 3 4 3
    // 2 6 2
    // 1 8 1

    for (int i = 0; i < 2 * n - 1; i++) {
        if (i < n) {
            // cout << i + 1 << " ";
            // cout << (2 * n - 2 * (i + 1));
            for (int j = 0; j < i + 1; j++) {
                cout << "*";
            }
            for (int j = 0; j < (2 * n - 2 * (i + 1)); j++) {
                cout << " ";
            }
            for (int j = 0; j < i + 1; j++) {
                cout << "*";
            }
        } else {
            // cout << 2 * n - i - 1 << " ";
            // cout << (2 * n) - 2 * (2 * n - i - 1);

            for (int j = 0; j < 2 * n - i - 1; j++) {
                cout << "*";
            }
            for (int j = 0; j < (2 * n) - 2 * (2 * n - i - 1); j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * n - i - 1; j++) {
                cout << "*";
            }
        }

        // cout << (2 * n - 1) - 2 * (abs(n - i - 1)) << " ";

        cout
            << "\n";
    }

    return 0;
}