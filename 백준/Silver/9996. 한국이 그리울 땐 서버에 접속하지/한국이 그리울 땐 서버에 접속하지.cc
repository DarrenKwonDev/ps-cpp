#include <bits/stdc++.h>

using namespace std;

vector<string> split(string input, string delim) {
    vector<string> ret;
    long long int pos;
    string token;

    while ((pos = input.find(delim)) != string::npos) {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delim.length());
    }
    ret.push_back(input);
    return ret;
}

int main(void) {
    int n;
    string s;
    cin >> n >> s;

    // v = {h, n}
    vector<string> v = split(s, "*");
    auto f = v[0];
    auto l = v[1];

    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;

        if (f.size() + l.size() > tmp.size()) {
            cout << "NE\n";
        } else {
            if (tmp.substr(0, f.size()) == f and tmp.substr(tmp.size() - l.size()) == l) {
                cout << "DA\n";
            } else {
                cout << "NE\n";
            }
        }
    }
}