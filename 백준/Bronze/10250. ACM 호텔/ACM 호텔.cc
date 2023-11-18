#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, h, w, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> h >> w >> n;

        // h층, w 방. n번째 손님.
        vector<vector<int>> v(h, vector<int>(w, 0));

        int roomX = n % h == 0 ? n / h : (n / h) + 1;
        int roomY = n % h == 0 ? h : n % h;

        if (roomX < 10) {
            cout << to_string(roomY) + "0" + to_string(roomX) << "\n";
        } else {
            cout << to_string(roomY) + to_string(roomX) << "\n";
        }
    }
}