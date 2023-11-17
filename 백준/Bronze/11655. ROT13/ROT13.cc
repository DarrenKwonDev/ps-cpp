#include <bits/stdc++.h>

using namespace std;

// 'a' = 97
// 'A' = 65
// 'a' ~ 'z' = 97 ~ 122
// 'A' ~ 'Z' = 65 ~ 90

#define alphabet_length (26)

int main(void) {
    string s;
    string ret = "";

    getline(cin, s);

    for (int ch : s) {
        if (isalpha(ch)) {
            if (islower((char)ch)) {
                ch = ch + 13;
                if (ch > 122) {
                    ch -= alphabet_length;
                }
            } else if (isupper((char)ch)) {
                ch = ch + 13;
                if (ch > 90) {
                    ch -= alphabet_length;
                }
            }
        }
        ret += (char)(ch);
    }
    cout << ret;
}