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
		int n; cin >> n;
		int cnt = 1;
		queue <string> q;
		vector <string> v;
		q.push("1");
		v.pb("1");
		while (cnt < n) {
			string s1 = q.front() + "0";
			string s2 = q.front() + "1";
			q.pop();
			q.push(s1); q.push(s2);
			v.pb(s1); v.pb(s2);
			cnt += 2;
		}
		for (int i = 0; i < n; i++) cout << v[i] << ' ';
		cout << endl;
	}
	return 0;
}

