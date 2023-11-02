#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    deque<int> D;

    for (int i = 0; i < n; i++) {
        string cmd;
        int target;

        cin >> cmd;

        if (cmd == "push_front") {
            cin >> target;
            D.push_front(target);
        } else if (cmd == "push_back") {
            cin >> target;
            D.push_back(target);
        } else if (cmd == "pop_front") {
            if (D.empty()) {
                cout << -1 << "\n";
            } else {
                cout << D.front() << "\n";
                D.pop_front();
            }
        } else if (cmd == "pop_back") {
            if (D.empty()) {
                cout << -1 << "\n";
            } else {
                cout << D.back() << "\n";
                D.pop_back();
            }
        } else if (cmd == "size") {
            cout << D.size() << "\n";
        } else if (cmd == "empty") {
            cout << D.empty() << "\n";
        } else if (cmd == "front") {
            if (D.empty()) {
                cout << -1 << "\n";
            } else {
                cout << D.front() << "\n";
            }
        } else if (cmd == "back") {
            if (D.empty()) {
                cout << -1 << "\n";
            } else {
                cout << D.back() << "\n";
            }
        }
    }
}