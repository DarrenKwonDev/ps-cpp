#include <bits/stdc++.h>

using namespace std;

#define alphabet_len (26)

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int arr[alphabet_len] = {
        0,
    };
    for (int ch : s) {
        arr[ch - 65]++;
    }
    // (모두 짝수) (모두 짝수 + 홀수 1개) 조합만 palindrome을 만들 수 있다.
    int odd_cnt = 0;
    int odd_idx = -1;
    for (int i = 0; i < alphabet_len; i++) {
        if (arr[i] % 2 != 0) {
            odd_idx = i;
            odd_cnt++;
        }
    }

    if (odd_cnt >= 2) {
        cout << "I'm Sorry Hansoo";
        return 0;
    }

    string first_half = "", second_half = "";
    char middle_char = odd_idx != -1 ? (char)(odd_idx + 'A') : '\0';
    for (int i = 0; i < alphabet_len; i++) {
        string temp(arr[i] / 2, (char)(i + 'A'));
        first_half += temp;
        second_half = temp + second_half;
    }

    string palindrome = first_half;
    if (middle_char)
        palindrome += middle_char;
    palindrome += second_half;

    cout << palindrome;
    return 0;
}