#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, i;
    int ans = 0;
    cin >> n >> k;

    vector<int> girl_v(6, 0);
    vector<int> boy_v(6, 0);

    for (i = 0; i < n; i++) {
        int s, y; // 여s0, 남s1, y학년
        cin >> s >> y;
        s == 0 ? girl_v[y - 1] += 1 : boy_v[y - 1] += 1;
    }
    for (i = 0; i < 6; i++) {
        ans += (girl_v[i] + 1) / 2;
        ans += (boy_v[i] + 1) / 2;
    }
    cout << ans;
}