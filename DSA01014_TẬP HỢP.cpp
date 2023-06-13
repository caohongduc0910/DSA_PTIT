#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n, k, s;
bool ok;
int a[21];
void khoitao() {
	for (int i = 1; i <= k; i++)
		a[i] = i;
}

void sinh() {
	int i = k;
	while (i > 0 && a[i] == n - k + i) {
		i--;
	}
	if (i == 0) ok = false;
	else {
		a[i]++;
		for (int j = i + 1; j <= k; j++)
			a[j] = a[j - 1] + 1;
	}
}

bool check() {
	int sum = 0;
	for (int i = 1; i <= k; i++) {
		sum += a[i];
	}
	return sum == s;
}

int main() {
	fast_io;
	while (1) {
		cin >> n >> k >> s;
		if (n == 0) return 0;
		else {
			if (k > n) cout << 0 << endl;
			else {
				ok = true;
				int cnt = 0;
				khoitao();
				while (ok) {
					if (check()) cnt++;
					sinh();
				}
				cout << cnt << endl;
			}
		}
	}
	return 0;
}
