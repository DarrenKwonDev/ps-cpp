#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int arr[26] = {
        0,
    };
    vector<int> v;
    string s;
    cin >> s;

    for (char ch : s) {
        int idx = (int)(tolower(ch)) - (int)('a');
        arr[idx] += 1;
    }

    // 최대 카운트를 구한다.
    int mx = 0;
    int idx_of_mx = 0;
    for (int i = 0; i < 26; i++) {
        if (arr[i] > mx) {
            mx = arr[i];
            idx_of_mx = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (arr[i] == mx and idx_of_mx != i) {
            cout << "?";
            return 0;
        }
    }

    char ret = (char)(idx_of_mx + 97);
    cout << (char)toupper(ret);
}