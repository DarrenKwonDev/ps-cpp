#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // 5
    // 최상단 2 * n - 1 (9)

    // 0 9 0
    // 1 7 1
    // 2 5 2
    // 3 3 3
    // 4 1 4

    for (size_t i = 0; i < n; i++) {
        // cout << i << " " << 2 * n - 2 * i - 1;

        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - 2 * i - 1; j++) {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}