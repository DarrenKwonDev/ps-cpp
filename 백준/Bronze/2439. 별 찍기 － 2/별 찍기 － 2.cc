#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (size_t i = 1; i < n + 1; i++) {
        // cout << i << " " << n - i << endl;
        // n - i 개의 공백 + i개의 *

        for (size_t j = 0; j < n - i; j++) {
            cout << " ";
        }

        for (size_t k = 1; k < i + 1; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}