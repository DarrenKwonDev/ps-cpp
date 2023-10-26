#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        cout << a + b << "\n";
    }

    return 0;
}