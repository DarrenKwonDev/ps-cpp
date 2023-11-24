#include <bits/stdc++.h>
#define fio()                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
    fio();

    int l;
    ll ret = 0;
    string s;
    cin >> l;
    cin >> s;

    // Modular arithmetic
    for (int i = 0; i < l; i++) {
        ll tmp = (s[i] - 'a' + 1) * pow(31, i);
        ret += tmp % 1234567891;
    }
    cout << ret % 1234567891;
}
