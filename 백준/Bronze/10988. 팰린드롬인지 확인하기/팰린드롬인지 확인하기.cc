#include <bits/stdc++.h>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    string tmp = s;

    reverse(s.begin(), s.end());

    cout << (s == tmp);
}