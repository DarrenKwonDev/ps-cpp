#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    char buff[101];
    char* p_buff = buff;
    int alphabet[26] = {
        0,
    };

    cin >> buff;

    while (*p_buff != '\0') {
        int idx = (int)(*p_buff) - 97;
        alphabet[idx] += 1;
        p_buff++;
    }

    for (size_t i = 0; i < 26; i++) {
        cout << alphabet[i] << " ";
    }

    return 0;
}