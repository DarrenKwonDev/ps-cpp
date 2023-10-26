#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int max = 0;
    int idx = 0;

    for (int i = 0; i < 9; i++) {
        int tmp;
        cin >> tmp;

        if (tmp > max) {
            max = tmp;
            idx = i;
        }
    }

    cout << max << "\n"
         << idx + 1;

    return 0;
}