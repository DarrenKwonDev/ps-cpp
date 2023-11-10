#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    if (a * b > 0) {
        // 1 혹은 3
        if (a > 0) {
            cout << 1;
        } else {
            cout << 3;
        }
    } else {
        // 2 혹은 4
        if (a > 0) {
            cout << 4;
        } else {
            cout << 2;
        }
    }

    return 0;
}
