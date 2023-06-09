#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int n;
vector <int> adj[1001];
bool visited[1001];

void dfs(int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

bool check() {
    dfs(1);
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) return false;
    }
    return true;
}

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < 1001; i++) adj[i].clear();
        memset(visited, false, sizeof(visited));
        for (int i = 0; i < n - 1; i++) {
            int x, y; cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        if (check()) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}