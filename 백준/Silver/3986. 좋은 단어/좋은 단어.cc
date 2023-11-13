#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int cnt = 0;

    cin >> n;

    for (size_t i = 0; i < n; i++) {
        string str;
        stack<char> st;

        cin >> str;

        if (str.size() % 2 == 1) {
            continue;
        }

        for (char ch : str) {
            if (st.empty()) {
                st.push(ch);
            } else {
                if (ch == 'A') {
                    if (st.top() == 'A') {
                        st.pop();
                    } else {
                        st.push(ch);
                    }
                }
                if (ch == 'B') {
                    if (st.top() == 'B') {
                        st.pop();
                    } else {
                        st.push(ch);
                    }
                }
            }
        }

        if (st.empty()) {
            cnt += 1;
        }
    }

    cout << cnt;

    return 0;
}