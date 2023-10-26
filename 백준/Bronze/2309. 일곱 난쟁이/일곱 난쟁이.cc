#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    size_t i, j;
    vector<int> v(9);
    int tot = 0;

    for (i = 0; i < 9; i++) {
        int tmp;
        cin >> tmp;
        tot += tmp;
        v[i] = tmp;
    }

    // 2개를 빼서 합이 100인지 확인 후
    sort(v.begin(), v.end());

    for (i = 0; i < 9; i++) {
        for (j = i; j < 9; j++) {
            if (tot - v[i] - v[j] == 100) {
                for (size_t k = 0; k < 9; k++) {
                    if (k != i && k != j) {
                        cout << v[k] << "\n";
                    }
                }
                return 0;
            }
        }
    }

    return 0;
}