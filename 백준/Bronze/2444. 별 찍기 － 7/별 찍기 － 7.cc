#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // 5
    // 4 1 4 -> 9 - 8
    // 3 3 3 -> 9 - 6
    // 2 5 2 -> 9 - 4
    // 1 7 1 -> 9 - 2
    // 0 9 0 -> 9 - 0
    // 1 7 1 -> 9 - 2
    // 2 5 2
    // 3 3 3
    // 4 1 4

    for (int i = 0; i < 2 * n - 1; i++) {
        // cout << abs(n - i - 1) << " ";
        // cout << (2 * n - 1) - 2 * (abs(n - i - 1)) << " ";

        for (int j = 0; j < abs(n - i - 1); j++) {
            cout << " ";
        }
        for (int j = 0; j < (2 * n - 1) - 2 * (abs(n - i - 1)); j++) {
            cout << "*";
        }

        cout
            << "\n";
    }

    return 0;
}