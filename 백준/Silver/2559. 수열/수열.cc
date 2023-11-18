#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, k;
    cin >> n >> k;
    int max = -100 * 100000;
    int acc_arr[100001];
    acc_arr[0] = 0;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        acc_arr[i + 1] = acc_arr[i] + tmp;
    }
    for (int j = k; j <= n; j++) {
        int hap = acc_arr[j] - acc_arr[j - k];
        if (hap > max) {
            max = hap;
        }
    }
    cout << max;
}