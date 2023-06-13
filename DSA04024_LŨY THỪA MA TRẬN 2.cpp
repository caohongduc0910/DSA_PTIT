#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int const mod = 1e9 + 7;

int n, k;

struct matrix {
	ll a[20][20];
	int n;
	matrix operator * (matrix other) {
		matrix ans;
		ans.n = n;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				ans.a[i][j] = 0;
				for (int k = 0; k < n; k++) {
					ans.a[i][j] += a[i][k] * other.a[k][j];
					ans.a[i][j] %= mod;
				}
			}
		}
		return ans;
	}
};

matrix bipow(matrix a, int n) {
	if (n == 1) return a;
	matrix res = bipow(a, n / 2);
	if (n % 2 == 0) return res * res;
	else return res * res * a;
}

int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		cin >> n >> k;
		matrix a;
		a.n = n;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a.a[i][j];
			}
		}
		matrix ans = bipow(a, k);
		ll res = 0;
		for (int i = 0; i < n; i++) {
			res += ans.a[i][n - 1];
			res %= mod;
		}
		cout << res << endl;
	}
	return 0;
}

