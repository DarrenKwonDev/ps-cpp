#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a;
    cin >> a;
    int tot = 1;
    for (int i = 1; i < a + 1; i++) {
        tot = tot * i;
    }

    cout << tot;

    return 0;
}
