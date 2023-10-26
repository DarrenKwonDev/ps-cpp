#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    vector<int> v = {a, b, c};
    sort(v.begin(), v.end()); // ascending order

    cout << v[0] << ' ';
    cout << v[1] << ' ';
    cout << v[2] << ' ';

    return 0;
}