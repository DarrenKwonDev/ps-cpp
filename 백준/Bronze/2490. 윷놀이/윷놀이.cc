#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d;

    for (size_t i = 0; i < 3; i++) {
        cin >> a >> b >> c >> d;

        int tot = a + b + c + d;

        // 도(배 한 개, 등 세 개) = 3
        // 개(배 두 개, 등 두 개) = 2
        // 걸(배 세 개, 등 한 개) = 1
        // 윷(배 네 개) = 0
        // 모(등 네 개)  = 4
        if (tot == 4) {
            cout << "E\n";
        } else if (tot == 3) {
            cout << "A\n";
        } else if (tot == 2) {
            cout << "B\n";
        } else if (tot == 1) {
            cout << "C\n";
        } else {
            cout << "D\n";
        }
    }

    return 0;
}