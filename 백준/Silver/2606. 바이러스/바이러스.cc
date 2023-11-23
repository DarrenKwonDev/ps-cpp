#include <bits/stdc++.h>
#define fio()                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
typedef long long ll;
using namespace std;

int vis[101];
vector<int> adj[101];
int ret = 0;

void dfs(int node) {
    vis[node] = 1;
    ret++;
    for (int nei : adj[node]) {
        if (nei != 0 && !vis[nei]) {
            dfs(nei);
        }
    }
}

int main() {
    fio();

    int n; // 컴퓨터 수
    int m; // 연결된 쌍의 수
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;
        adj[r].push_back(c);
        adj[c].push_back(r);
    }

    dfs(1);
    cout << ret - 1; // remove self
}
