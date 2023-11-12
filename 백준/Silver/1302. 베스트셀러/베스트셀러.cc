#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_map<string, int> uMap;
    uMap.reserve(1000);
    vector<string> v;
    v.reserve(1000);

    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        string name;
        cin >> name;
        uMap[name]++;
    }

    int max_cnt = 0;
    for (auto& kv : uMap) {
        if (kv.second > max_cnt) {
            max_cnt = kv.second;
        }
    }
    for (auto& kv : uMap) {
        if (max_cnt == kv.second) {
            v.push_back(kv.first);
        }
    }
    sort(v.begin(), v.end());
    cout << v[0];

    return 0;
}
