#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int a, b;
    size_t i;

    cin >> a >> b;

    if (a == b) {
        cout << 0 << endl;
        return 0;
    }

    if (a > b) {
        swap(a, b);
    }
    cout << b - a - 1 << "\n";
    for (i = a + 1; i < b; i++) {
        cout << i << " ";
    }

    return 0;
}