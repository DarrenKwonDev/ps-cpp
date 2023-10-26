#include <iostream>

using namespace std;

int main(void) {
    int a, b, c;
    cin >> a >> b;
    size_t i;
    for (i = 0; i < a; i++) {
        cin >> c;
        if (c < b) {
            cout << c << " ";
        }
    }

    return 0;
}