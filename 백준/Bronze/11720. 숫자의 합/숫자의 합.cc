#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    string s;
    cin >> s;

    int tot = 0;
    for (int i = 0; i < t; i++) {
        tot += (int)(s[i] - '0');
    }

    cout << tot;

    return 0;
}