#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int m, n;
vector <int> adj[1001];
bool vis[1001];
int par[1001];

bool dfs(int u) {
	vis[u] = true;
	for (int v : adj[u]) {
		if (!vis[v]) {
			par[v] = u;
			if (dfs(v)) return true;
		}
		else {
			if (par[u] != v) return true;
		}
	}
	return false;
}

int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		cin >> n >> m;
		memset(vis, false, sizeof(vis));
		memset(par, false, sizeof(par));
		for (int i = 0; i < 1001; i++) adj[i].clear();
		while (m--) {
			int x, y; cin >> x >> y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		bool ok = false;
		for (int i = 1; i <= n; i++) {
			if (!vis[i]) {
				if (dfs(i)) {
					ok = true;
					break;
				}
			}
		}
		if (ok) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}


