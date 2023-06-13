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
		q.push("9");
		v.pb("9");
		while (q.front().size() < 13) {
			string s1 = q.front() + "0";
			string s2 = q.front() + "9";
			q.pop();
			q.push(s1); q.push(s2);
			v.pb(s1); v.pb(s2);
		}
		for (int i = 0; i < v.size(); i++) {
			ll temp = stoll(v[i]);
			if (temp % n == 0) {
				cout << v[i] << endl;
				break;
			}
		}
	}
	return 0;
}

