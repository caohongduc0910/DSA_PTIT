#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
	fast_io;
	int n, k; cin >> n >> k;
	int a[n + 1][n + 1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	}
	int x[n + 1];
	for (int i = 1; i <= n; i++) x[i] = i;
	vector <vector <int>> v;
	vector <int> temp;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += a[i][x[i]];
		temp.pb(x[i]);
	}
	if (sum == k) v.pb(temp);
	while (next_permutation(x, x + n + 1)) {
		temp.clear();
		sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += a[i][x[i]];
			temp.pb(x[i]);
		}
		if (sum == k) v.pb(temp);
	}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
