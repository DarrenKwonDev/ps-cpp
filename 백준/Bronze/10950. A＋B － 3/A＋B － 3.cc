#include <algorithm>
#include <assert.h>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        cin >> a >> b;
        cout << a + b << "\n";
    }
}