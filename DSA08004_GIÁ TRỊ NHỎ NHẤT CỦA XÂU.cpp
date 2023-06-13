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
		priority_queue <int> q;
		int n;
		string s;
		cin >> n >> s;
		if (n >= s.size()) cout << 0 << endl;
		else {
			map <char, int> mp;
			for (int i = 0; i < s.size(); i++)
				mp[s[i]]++;
			for (auto it : mp) q.push(it.second);
			while (n--) {
				int x = q.top();
				q.pop();
				x--;
				q.push(x);
			}
			ll ans = 0;
			while (!q.empty()) {
				ans += pow(q.top(), 2);
				q.pop();
			}
			cout << ans << endl;
		}
	}
	return 0;
}
