#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int a, b, c;
    cin >> a >> b >> c;
    string str = to_string(a * b * c);
    int i;

    int arr[10] = {
        0,
    };
    for (i = 0; i < str.size(); i++) {
        // char to num
        arr[str[i] - '0'] += 1;
    }
    for (i = 0; i < 10; i++) {
        cout << arr[i] << "\n";
    }
}