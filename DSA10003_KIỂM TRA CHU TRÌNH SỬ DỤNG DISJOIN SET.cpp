#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n, m;
int par[1001], siz[1001];

int Find(int v) {
	if (v == par[v]) return v;
	else
		return par[v] = Find(par[v]);
}

bool Union(int u, int v) {
	int a = Find(u);
	int b = Find(v);
	if (a == b) return false;
	else {
		if (siz[a] < siz[b]) swap(a, b);
		par[b] = a;
		siz[a] += siz[b];
		return true;
	}
}

int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		cin >> n >> m;
		vector <int> v1, v2;
		for (int i = 1; i <= n; i++) {
			par[i] = i;
			siz[i] = 1;
		}
		int temp = m;
		while (m--) {
			int x, y; cin >> x >> y;
			v1.pb(x);
			v2.pb(y);
		}
		bool ok = false;
		for (int i = 1; i <= temp; i++) {
			if (!Union(v1[i], v2[i])) {
				ok = true;
				break;
			}
		}
		if (ok) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
