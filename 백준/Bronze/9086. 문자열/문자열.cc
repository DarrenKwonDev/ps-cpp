#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++) {
        string s;
        cin >> s;
        if (s.size() == 0) {
            cout << s << s;
        } else {
            cout << s[0] << s[s.size() - 1];
        }
        cout << "\n";
    }

    return 0;
}
