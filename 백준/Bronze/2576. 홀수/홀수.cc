#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int smallest;
    int tot = 0;

    for (size_t i = 0; i < 7; i++) {
        int tmp;
        cin >> tmp;

        if (tmp % 2 == 1) {
            tot += tmp;
            if (smallest > tmp) {
                smallest = tmp;
            }
        }
    }
    if (tot == 0) {
        cout << -1;
        return 0;
    }
    cout << tot << "\n";
    cout << smallest;

    return 0;
}