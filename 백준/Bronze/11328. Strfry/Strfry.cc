#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> occur(26, 0);

    int i;
    string a, b;

    for (i = 0; i < n; i++) {
        cin >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (a == b) {
            cout << "Possible\n";
        } else {
            cout << "Impossible\n";
        }
    }

    return 0;
}