#include <iostream>

using namespace std;

int main() {
    string str;
    string o;

    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        char ch;
        ch = str[i];
        if (islower(ch)) {
            o += toupper(ch);
        } else {
            o += tolower(ch);
        }
    }

    cout << o;

    return 0;
}
