#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    int k;
    stack<int> S;

    cin >> k;

    for (int i = 0; i < k; i++) {
        int num;
        cin >> num;

        if (num == 0) {
            if (!S.empty()) {
                S.pop();
            }
        } else {

            S.push(num);
        }
    }

    int tot = 0;
    while (!S.empty()) {
        tot += S.top();
        S.pop();
    }

    cout << tot;

    return 0;
}
