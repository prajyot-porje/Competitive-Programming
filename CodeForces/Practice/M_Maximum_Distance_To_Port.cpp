#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> product(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> product[i];
    }

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> dist(n + 1, -1);
    queue<int> q;
    dist[1] = 0;
    q.push(1);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    vector<int> ans(k + 1, 0);

    for (int city = 1; city <= n; city++) {
        int p = product[city];
        ans[p] = max(ans[p], dist[city]);
    }
    for (int p = 1; p <= k; p++) {
        cout << ans[p] << " ";
    }

    return 0;
}
