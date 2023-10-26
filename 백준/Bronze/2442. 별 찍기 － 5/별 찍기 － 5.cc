#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // 5
    // 최하단 2 * n - 1 (9)

    // 4 1 4
    // 3 3 3
    // 2 5 2
    // 1 7 1
    // 0 9 0

    for (size_t i = 0; i < n; i++) {
        int j = 0;
        int k = 0;
        for (; j < n - i - 1; j++) {
            cout << " ";
        }
        for (; k < 2 * i + 1; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}