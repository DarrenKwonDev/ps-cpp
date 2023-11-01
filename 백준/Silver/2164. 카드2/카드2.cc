#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    queue<int> Q;

    for (int i = 0; i < n; i++) {
        Q.push(i + 1);
    }
    if (Q.size() == 1) {
        cout << Q.front();
    }
    while (Q.size() > 1) {
        Q.pop();
        if (Q.size() == 1) {
            cout << Q.front();
            return 0;
        }
        int elem = Q.front();
        Q.pop();
        Q.push(elem);
    }

    return 0;
}