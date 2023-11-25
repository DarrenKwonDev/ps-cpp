#include <bits/stdc++.h>
#define fio()                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
    fio();
    double a, b, v;
    cin >> a >> b >> v;
    cout << fixed << setprecision(0) << ceil((v - b) / (a - b));
}
