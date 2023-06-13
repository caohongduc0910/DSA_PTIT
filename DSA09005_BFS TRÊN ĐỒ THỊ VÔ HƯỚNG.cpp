#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n, m, u;
bool vis[1001];
vector <int> adj[1001];

void bfs(int u) {
	queue <int> q;
	q.push(u);
	vis[u] = true;
	while (!q.empty()) {
		int top = q.front();
		q.pop();
		cout << top << ' ';
		for (int v : adj[top]) {
			if (!vis[v]) {
				q.push(v);
				vis[v] = true;
			}
		}
	}
	cout << endl;
}

int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		for (int i = 0; i < 1001; i++) {
			adj[i].clear();
		}
		memset(vis, false, sizeof(vis));
		cin >> n >> m >> u;
		while (m--) {
			int x, y; cin >> x >> y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		bfs(u);
	}
	return 0;
}

