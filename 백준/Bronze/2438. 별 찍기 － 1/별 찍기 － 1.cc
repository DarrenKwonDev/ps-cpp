#include <iostream>

using namespace std;

string str_make(int n) {
    string k = "";
    for (size_t i = 1; i <= n; i++) {
        k += "*";
    }
    return k;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (size_t i = 1; i < n + 1; i++) {
        if (i == n + 1) {
            cout << str_make(i);
        } else {
            cout << str_make(i) << "\n";
        }
    }

    return 0;
}