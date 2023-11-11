#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m];
    int b[n][m];

    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            int tmp;
            cin >> tmp;
            a[i][j] = tmp;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            int tmp;
            cin >> tmp;
            b[i][j] = tmp;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
