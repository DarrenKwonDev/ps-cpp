#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string tmp;
        vector<char> v;
        bool is_valid = true;

        v.reserve(51);
        cin >> tmp;

        for (int j = 0; j < tmp.size(); j++) {
            char ch = tmp[j];
            if (ch == '(') {
                v.push_back(ch);
            } else { // case )
                if (!v.empty()) {
                    v.pop_back();
                } else {
                    is_valid = false;
                    break;
                }
            }
        }

        if (is_valid && v.empty()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

        v.clear();
    }

    return 0;
}