#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int n, m, u;
bool visited[1001];
vector <int> adj[1001];
vector <string> ans;

void bfs(int u) {
    visited[u] = true;
    queue <int> q;
    q.push(u);
    while (!q.empty()) {
        int top = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (!visited[v]) {
                string temp = to_string(u) + " " + to_string(v);
                q.push(v);
            }
        }
    }
}

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        memset(visited, false, sizeof(visited));
        for (int i = 0; i < 1001; i++) adj[i].clear();
        ans.clear();
        cin >> n >> m >> u;
        while (m--) {
            int x, y; cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        dfs(u);
        if (ans.size() != n - 1) cout << -1 << endl;
        else {
            for (int i = 0; i < ans.size(); i++) cout << ans[i] << endl;
        }
    }
    return 0;
}