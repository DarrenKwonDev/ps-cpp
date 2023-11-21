#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v[i] = tmp;
    }
    if (v.size() == 1) {
        cout << pow(v[0], 2);
        return 0;
    }
    auto mn = min_element(v.begin(), v.end());
    auto mx = max_element(v.begin(), v.end());
    cout << (*mn) * (*mx);
}