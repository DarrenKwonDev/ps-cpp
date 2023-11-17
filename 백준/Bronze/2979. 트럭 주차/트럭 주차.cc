#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int a, b, c;
    int ret = 0;
    vector<int> occur(101);

    cin >> a >> b >> c;

    for (int i = 0; i < 3; i++) {
        int visit, leave;
        cin >> visit >> leave;
        for (int j = visit; j < leave; j++) {
            occur[j]++;
        }
    }

    for (auto v : occur) {
        if (v == 1) {
            ret += a * 1;
        } else if (v == 2) {
            ret += b * 2;
        } else if (v == 3) {
            ret += c * 3;
        }
    }

    cout << ret;
}