#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int i;

    int arr[30] = {
        0,
    };

    for (i = 0; i < 28; i++) {
        int tmp;
        cin >> tmp;
        arr[tmp - 1] = 1;
    }

    for (i = 0; i < 30; i++) {
        if (arr[i] == 0) {
            cout << i + 1 << "\n";
        }
    }

    return 0;
}
