#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int m, n;
vector <int> adj[1001];
int color[1001];

bool dfs(int u) {
	color[u] = 1;
	for (int v : adj[u]) {
		if (color[v] == 0) {
			color[v] = 1;
			if (dfs(v)) return true;
		}
		else {
			if (color[v] == 1) return true;
		}
	}
	color[u] = 2;
	return false;
}

int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		cin >> n >> m;
		memset(color, false, sizeof(color));
		for (int i = 0; i < 1001; i++) adj[i].clear();
		while (m--) {
			int x, y; cin >> x >> y;
			adj[x].pb(y);
		}
		bool ok = false;
		for (int i = 1; i <= n; i++) {
			if (!color[i]) {
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


