#include <iostream>

using namespace std;

int main() {

    int tot = 0;
    for (size_t i = 0; i < 5; i++) {
        int a;
        cin >> a;
        tot += (a * a);
    }
    cout << tot % 10;
}
