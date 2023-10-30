#include <bits/stdc++.h>

using namespace std;

int main(void) {
    string initial = "";
    int i, m;

    cin >> initial;
    cin >> m;

    list<char> l;
    list<char>::iterator cursor;

    for (char v : initial) {
        l.push_back(v);
    }

    cursor = l.end();

    for (i = 0; i < m; i++) {
        char cmd;
        char ch = '\0';

        cin >> cmd;
        if (cmd == 'P') {
            cin >> ch;
        } else {
            ch = '\0';
        }

        switch (cmd) {
        case 'L':
            if (cursor != l.begin()) {
                cursor--;
            };
            break;
        case 'D':
            if (cursor != l.end()) {
                cursor++;
            };
            break;
        case 'B':
            if (cursor != l.begin()) {
                cursor--;
                cursor = l.erase(cursor);
            };
            break;
        case 'P':
            l.insert(cursor, ch);
            break;

        default:
            break;
        }

        // cout << "---iter " << i << " ---" << endl;
        // cout << "cursor pointing at " << *cursor << endl;
        // for (auto elem : l) {
        //     cout << elem;
        // }
        // cout << endl;
    }

    for (auto elem : l) {
        cout << elem;
    }

    return 0;
}