#include <bits/stdc++.h>

using namespace std;

int main(void) {
    string init;
    int n, i;

    cin >> n;

    for (i = 0; i < n; i++) {
        list<char> l;
        list<char>::iterator cursor = l.begin();

        cin >> init;

        for (char ch : init) {

            switch (ch) {

            case '<':
                if (cursor != l.begin()) {
                    cursor--;
                }
                break;
            case '>':
                if (cursor != l.end()) {
                    cursor++;
                }
                break;
            case '-':
                if (cursor != l.begin()) {
                    cursor = l.erase(--cursor);
                }
                break;

            default:
                l.insert(cursor, ch);

                break;
            }
        }

        for (char v : l) {
            cout << v;
        }
        cout << "\n";

        l.clear();
    }

    return 0;
}