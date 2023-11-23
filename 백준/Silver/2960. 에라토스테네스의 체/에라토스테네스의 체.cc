#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    int arr[n + 1];
    for (int i = 2; i <= n; i++) {
        arr[i] = i;
    }

    int cnt = 0;
    while (1) {

        int base = 2;
        for (int i = 2; i <= n; i++) {
            if (arr[i] != 0) {
                base = i;
                break;
            }
        }

        for (int i = 2; i <= n; i++) {
            if (i % base == 0 and arr[i] != 0) {
                cnt++;
                if (cnt == k) {
                    cout << arr[i];
                    return 0;
                };
                arr[i] = 0;
            }
        }
    }
}
