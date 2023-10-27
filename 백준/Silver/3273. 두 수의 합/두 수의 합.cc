#include <algorithm>
#include <assert.h>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, i, x;
    int cnt = 0;
    cin >> n;
    vector<int> v(n, 0);
    vector<int> cnt_v(2000001, 0);

    for (i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v[i] = tmp;
        cnt_v[tmp] = 1; // 73의 존재 확인을 위해 cnt_v[73] 확인.
    }
    cin >> x;
    for (i = 0; i < n; i++) {
        if (x - v[i] >= 0 && cnt_v[x - v[i]] != 0) {
            cnt++;
        }
    }

    cout << cnt / 2;
}