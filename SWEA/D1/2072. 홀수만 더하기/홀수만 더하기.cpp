#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++) {
        int tot = 0;
        for (size_t j = 0; j < 10; j++) {
            int tmp;
            cin >> tmp;
            if (tmp % 2 == 1) {
                tot += tmp;
            }
        }
        cout << "#" << i + 1 << " " << tot << "\n";
    }

    return 0;
}