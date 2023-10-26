#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v(5);
    int tot = 0;

    for (size_t i = 0; i < 5; i++) {
        int tmp;
        cin >> tmp;
        v[i] = tmp;
        tot += tmp;
    }

    sort(v.begin(), v.end());

    cout << tot / 5 << "\n";
    cout << v[2];

    return 0;
}