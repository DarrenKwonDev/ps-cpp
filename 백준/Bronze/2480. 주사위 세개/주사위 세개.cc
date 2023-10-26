#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());

    if (a == b && b == c) {
        cout << 10000 + a * 1000;
    } else if (a != b && b != c && a != c) {
        cout << v[2] * 100;
    } else {
        if (a == b) {
            cout << 1000 + (a * 100);
        } else {
            cout << 1000 + (c * 100);
        }
    }

    return 0;
}