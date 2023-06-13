#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		queue <ll> q;
		vector <ll> v;
		q.push(1);
		v.pb(1);
		ll maxx = pow(2, 50);
		while (q.front() < maxx) {
			ll s1 = q.front() * 10;
			ll s2 = q.front() * 10 + 1;
			q.pop();
			q.push(s1); q.push(s2);
			v.pb(s1); v.pb(s2);
		}
		int cnt = 0;
		for (int i = 0; i < v.size(); i++) {
			if (v[i] <= n) cnt++;
			else break;
		}
		cout << cnt << endl;
	}
	return 0;
}

