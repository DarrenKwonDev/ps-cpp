#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // [0, n - 1]
    for (size_t i = 0; i < n; i++) {
        // [0, n - i]
        for (size_t j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}