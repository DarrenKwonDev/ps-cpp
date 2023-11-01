#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    int n;
    stack<int> S;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string cmd;
        int target;

        cin >> cmd;

        if (cmd == "push") {
            cin >> target;
            S.push(target);
        } else if (cmd == "pop") {
            if (S.empty()) {
                cout << -1 << "\n";
            } else {
                cout << S.top() << "\n";
                S.pop();
            }
        } else if (cmd == "size") {
            cout << S.size() << "\n";
        } else if (cmd == "empty") {
            if (S.empty()) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else if (cmd == "top") {
            if (S.empty()) {
                cout << -1 << "\n";
            } else {
                cout << S.top() << "\n";
            }
        } else {
            cerr << "err";
        }
    }

    return 0;
}
