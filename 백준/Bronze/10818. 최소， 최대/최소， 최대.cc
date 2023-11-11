#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> v;
    v.reserve(n);

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    int min = v[0];
    int max = v[0];

    for (auto k : v) {
        if (min > k) {
            min = k;
        }
        if (max < k) {
            max = k;
        }
    }

    cout << min << " " << max;

    return 0;
}
