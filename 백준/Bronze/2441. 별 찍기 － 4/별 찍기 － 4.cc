#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // [0, n - 1]
    for (size_t i = 0; i < n; i++) {
        // cout << i << " " << n - i << endl;
        // 공백 i, "*" n - i개
        int j, k;
        for (j = 0; j < i; j++)
            cout << " ";
        for (k = 0; k < n - i; k++)
            cout << "*";
        cout << "\n";
    }

    return 0;
}