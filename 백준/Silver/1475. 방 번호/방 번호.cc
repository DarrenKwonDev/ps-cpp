#include <algorithm>
#include <assert.h>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str_n;
    int cnt = 0;
    int i = 0;

    // idx가 곧 해당 숫자의 사용 여부
    // v[0]은 0이 사용된 횟수
    vector<int> v(10, 0);

    cin >> str_n;

    for (i = 0; i < str_n.size(); i++) {
        v[str_n[i] - '0'] += 1;
    }

    // 6은 9를 뒤집어서 이용할 수 있고, 9는 6을 뒤집어서 이용할 수 있다.

    // 9999
    // 0 4 -> 2개 필요.

    // 69999
    // 1 4 -> 3개 필요.

    // 66999
    // 2 3 -> 3개 필요

    // 669999
    // 2 4 -> 3개 필요

    // 666999
    // 3 3 -> 3개 필요.

    int tmp = v[6] + v[9];
    tmp = tmp % 2 == 0 ? tmp / 2 : tmp / 2 + 1;
    v[6] = tmp;
    v[9] = tmp;

    int max = v[0];
    for (i = 0; i < 10; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }

    cout << max;
}