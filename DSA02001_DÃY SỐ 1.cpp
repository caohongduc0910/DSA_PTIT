#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void Try(int a[], int n) {
    if (n == 1) {
        return;
    }
    else {
        for (int i = 1; i < n; i++) {
            a[i] = a[i] + a[i + 1];
        }
        n--;
        cout << '[';
        for (int i = 1; i <= n; i++) {
            if (i == n) cout << a[i];
            else cout << a[i] << ' ';
        }
        cout << "]\n";
        Try(a, n);
    }
}

int main() {
    fast_io;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++) cin >> a[i];
        cout << '[';
        for (int i = 1; i <= n; i++) {
            if (i == n) cout << a[i];
            else cout << a[i] << ' ';
        }
        cout << "]\n";
        Try(a, n);
    }
    return 0;
}