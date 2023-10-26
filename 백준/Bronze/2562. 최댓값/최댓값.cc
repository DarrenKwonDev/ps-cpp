#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v(9);

    int max = 0;
    int idx = 0;

    for (int i = 0; i < 9; i++) {
        cin >> v[i];

        if (v[i] > max) {
            max = v[i];
            idx = i;
        }
    }

    cout << max << "\n"
         << idx + 1;

    return 0;
}