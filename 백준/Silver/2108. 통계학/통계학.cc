#include <bits/stdc++.h>
#define fio()                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
    fio();

    int n;
    cin >> n;

    int sum = 0;
    map<int, int> occurMap;
    int mn = INT_MAX;
    int mx = INT_MIN;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        occurMap[tmp]++;
        if (tmp > mx) {
            mx = tmp;
        }
        if (tmp < mn) {
            mn = tmp;
        }
        sum += tmp;
        v.push_back(tmp);
    }

    // 산술평균
    cout << fixed << setprecision(1);
    cout << (int)round((double)sum / n) << "\n";

    // 중앙값
    sort(v.begin(), v.end());
    cout << v[(0 + v.size() - 1) / 2] << "\n";

    // 최빈값
    vector<int> freq_tmp_v;
    int most_freq = 0;
    for (auto [num, cnt] : occurMap) {
        if (most_freq < cnt) {
            most_freq = cnt;
        }
    }
    for (auto [num, cnt] : occurMap) {
        if (cnt == most_freq) {
            freq_tmp_v.push_back(num);
        }
    }
    if (freq_tmp_v.size() >= 2) {
        cout << freq_tmp_v[1] << "\n";
    } else {
        cout << freq_tmp_v[0] << "\n";
    }

    // 범위
    if (n == 1) {
        cout << 0 << "\n";
    } else {
        cout << abs(mx - mn) << "\n";
    }
}
