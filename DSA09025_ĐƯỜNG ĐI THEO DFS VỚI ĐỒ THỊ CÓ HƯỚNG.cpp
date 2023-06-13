#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n, m, s, t;
bool vis[1001];
vector <int> adj[1001];
int par[1001];

void dfs(int u){
	//cout << u << ' ';
	vis[u] = true;
	for(int v : adj[u]){
		if(!vis[v]){
			par[v] = u;
			dfs(v);
		}
	}
}

int main() {
    fast_io;
    int te; cin >> te;
    while(te--){
    	memset(vis, false, sizeof(vis));
    	for(int i = 0; i < 1001; i++) adj[i].clear();
    	memset(par, 0, sizeof(par));
    	cin >> n >> m >> s >> t;
    	while(m--){
    		int x,y; cin >> x >> y;
    		adj[x].pb(y);
		}
		dfs(s);
		if(!vis[t]) cout << "-1";
		else{
			vector <int> v;
			while(t != s){
				v.pb(t);
				t = par[t];
			}
			v.pb(s);
			for(int i = v.size()-1 ; i >= 0; i--) cout << v[i] << ' ';
			cout << endl;
		}
	}
    return 0;
}


