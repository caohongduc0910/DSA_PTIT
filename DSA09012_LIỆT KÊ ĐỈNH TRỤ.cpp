#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n, m;
bool vis[1001];
vector <int> adj[1001];

void dfs(int u) {
	vis[u] = true;
	for (int v : adj[u]) {
		if (!vis[v])
			dfs(v);
	}
}

int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		memset(vis, false, sizeof(vis));
		for (int i = 0; i < 1001; i++) adj[i].clear();
		cin >> n >> m;
		while (m--) {
			int x, y; cin >> x >> y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		int tplt = 0;
		for (int i = 1; i <= n; i++) {
			if (!vis[i]) {
				dfs(i);
				tplt++;
			}
		}
		int cnt;
		vector <int> v;
		for (int i = 1; i <= n; i++) {
			memset(vis, false, sizeof(vis));
			cnt = 0;
			vis[i] = 1;
			for (int i = 1; i <= n; i++) {
				if (!vis[i]) {
					dfs(i);
					cnt++;
				}
			}
			if (cnt > tplt) v.pb(i);
		}
		for (int x : v) cout << x << ' ';
		cout << endl;
	}
	return 0;
}


