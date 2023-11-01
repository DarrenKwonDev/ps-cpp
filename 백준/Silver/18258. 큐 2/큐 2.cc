#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    queue<int> Q;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string cmd;
        int target;
        cin >> cmd;

        if (cmd == "push") {
            cin >> target;
            Q.push(target);
        } else if (cmd == "pop") {
            if (Q.empty()) {
                cout << -1 << "\n";
            } else {
                int k = Q.front();
                Q.pop();
                cout << k << "\n";
            }
        } else if (cmd == "size") {
            cout << Q.size() << "\n";
        } else if (cmd == "empty") {
            if (Q.empty()) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else if (cmd == "front") {
            if (Q.empty()) {
                cout << -1 << "\n";
            } else {
                cout << Q.front() << "\n";
            }
        } else if (cmd == "back") {
            if (Q.empty()) {
                cout << -1 << "\n";
            } else {
                cout << Q.back() << "\n";
            }
        }
    }
}