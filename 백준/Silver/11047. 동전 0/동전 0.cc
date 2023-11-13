#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    int cnt = 0;
    int i;

    cin >> n >> k;

    vector<int> v(0);
    v.reserve(n);

    for (i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    i = n - 1;
    while (k != 0) {
        int quota = k / v[i];
        if (quota > 0) {
            cnt += quota;
            k -= (quota * v[i]);
        } else {
            if (i > 0) {
                i--;
            }
        }
    }

    cout << cnt;

    return 0;
}