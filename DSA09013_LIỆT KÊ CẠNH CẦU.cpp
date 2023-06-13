#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n, m;
bool vis[1001];
vector <int> adj[1001];

void dfs(int u, int x, int y) {
	vis[u] = true;
	for (int v : adj[u]) {
		if ((v == x && u == y) || (v == y && u == x))
			continue;
		if (!vis[v]) dfs(v, x, y);
	}
}

int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		memset(vis, false, sizeof(vis));
		for (int i = 0; i < 1001; i++) adj[i].clear();
		cin >> n >> m;
		vector <pair <int, int>> e;
		while (m--) {
			int x, y; cin >> x >> y;
			adj[x].pb(y);
			adj[y].pb(x);
			e.pb(make_pair(x, y));
		}
		int tplt = 0;
		for (int i = 1; i <= n; i++) {
			if (!vis[i]) {
				tplt++;
				dfs(i, -1, -1);
			}
		}
		int cnt;
		vector <int> v;
		for (auto it : e) {
			cnt = 0;
			int x = it.first, y = it.second;
			memset(vis, false, sizeof(vis));
			for (int i = 1; i <= n; i++) {
				if (!vis[i]) {
					cnt++;
					dfs(i, x, y);
				}
			}
			if (cnt > tplt) {
				v.pb(x);
				v.pb(y);
			}
		}
		for (int x : v) cout << x << ' ';
		cout << endl;
	}
	return 0;
}
