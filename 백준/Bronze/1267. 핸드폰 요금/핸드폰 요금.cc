#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int tot1 = 0;
    int tot2 = 0;

    cin >> n;

    for (size_t i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;

        // 요금 계산
        tot1 += ((tmp / 30) + 1) * 10;
        tot2 += ((tmp / 60) + 1) * 15;
    }

    if (tot1 == tot2) {
        cout << "Y M " << tot2;
    } else if (tot1 > tot2) { // 민식이 저렴
        cout << "M " << tot2;
    } else {
        cout << "Y " << tot1;
    }

    return 0;
}