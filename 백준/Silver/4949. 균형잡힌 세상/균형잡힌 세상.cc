#include <iostream>
#include <stack>
#include <stdio.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1) {
        string buff;
        stack<char> s;
        bool validFlag = true;

        getline(cin, buff);
        if (buff == ".") {
            break;
        }

        for (auto ch : buff) {
            if (ch == '(' || ch == '[') {
                s.push(ch);
            }
            if (ch == ')') {
                if (!s.empty() && s.top() == '(') {
                    s.pop();
                } else {
                    validFlag = false;
                    break;
                }
            }
            if (ch == ']') {
                if (!s.empty() && s.top() == '[') {
                    s.pop();
                } else {
                    validFlag = false;
                    break;
                }
            }
        }

        if (!s.empty()) {
            cout << "no\n";
            continue;
        }

        if (validFlag) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }

    return 0;
}