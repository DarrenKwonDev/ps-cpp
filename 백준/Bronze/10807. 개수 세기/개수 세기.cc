#include <algorithm>
#include <assert.h>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, v;
    vector<int> occur(200, 0);

    cin >> n;
    for (size_t i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        // v는 -100 ~ 100임.
        occur[tmp + 100] += 1;
    }
    cin >> v;
    cout << occur[v + 100];
}