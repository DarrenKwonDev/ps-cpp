#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void v_swap_idx(vector<int>& v, int from, int to) {
    int tmp = v[from];
    v[from] = v[to];
    v[to] = tmp;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    size_t i, j;
    vector<int> v = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    for (i = 0; i < 10; i++) {
        int a, b;
        cin >> a >> b;

        if (a == b) {
            continue;
        }
        // 위치 a부터 위치 b까지를 역순으로 정리한다.
        // 5(a), 10(b) 이면
        // 총 6개의 존재. b - a + 1
        // 5	6	7	8	9	10
        // 10	9	8	7	6	5
        // b / b - 1 / b - 2 / b - 3 / b - 4 / b - a
        // 즉, a를 0부터 a가 될 때 까지 b를 빼주는 방식으로 교체함.

        for (j = 0; j < (b - a + 1) / 2; j++) {
            // cout << j + a - 1 << " swap " << b - j - 1 << endl;
            v_swap_idx(v, j + a - 1, b - j - 1);
        }
    }

    for (size_t k = 0; k < 20; k++) {
        cout << v[k] << " ";
    }

    return 0;
}