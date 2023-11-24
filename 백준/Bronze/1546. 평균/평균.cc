#include <bits/stdc++.h>
#define fio()                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
    fio();

    int n;
    cin >> n;

    vector<double> v;

    double mx = 0.;
    double sum = 0.;
    for (int i = 0; i < n; i++) {
        double tmp;
        cin >> tmp;
        if (tmp > mx) {
            mx = tmp;
        }
        sum += tmp;
    }
    cout << (sum / mx) * 100. / (double)(n);
}
