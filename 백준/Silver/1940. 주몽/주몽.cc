#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // m은 찾고자 하는 부분합
    int n, m;
    cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int start = 0;
    int end = n - 1;
    int cnt = 0;

    // max window is '2'
    while (start < end) {
        int interval_tot = v[start] + v[end];
        if (interval_tot < m) {
            start++;
        } else if (interval_tot > m) {
            end--;
        } else {
            start++;
            end--;
            cnt++;
        }
    }

    cout << cnt;
}